#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qcustomplot.h"

//------------Variables generales----------
QByteArray pedido_com, datos_com;
QString SetPoint;
int n = 0, h = 0, l = 0, j = 0, r = 0, k = 0, w = 0, q = 0, f = 0;
float i = 0;
bool ok, Boton = false, SP_Send = false, SP_Seted = false, BUG_Seted = false, flag_conn = false, flag_test = false;
//----------------------------------------
//-----------Variables PID---------------
int control;
float Ts = 1, Kr, Ti, Td;
float a, b, c;
float TEMPERATURA_LIMITE;
float rT=0, yT=0, eT=0, iT=0, dT=0, uT=0, iT0 = 0, eT0 = 0, yant = 25, xant = 0, xdat = 0;
float max = 122, min = 1;
//---------------------------------------
//---------Variables PID 2---------------
float pT = 0, e_k = 0, e_k_1 = 0, e_k_2 = 0, uT_1 = 0;
//---------------------------------------
//--------Variables para graficar--------
QVector<double> xg(201), yg(201), zg(201), wg(201); // initialize with entries 0..1000
//---------------------------------------
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    serial = new QSerialPort(this);
    Serial_Conf();                              //función que se encarga de configurar la comunicación serie
    connect(serial,SIGNAL(readyRead()),this,SLOT(Serial_Pedir()));  //enlazamos la función de lectura de dato por serie a una señal de lectura
    //ui->Set_Point->setVisible(false);
    ui->SetPoint->setEnabled(false);
    ui->Spin_Kr->setEnabled(false);
    ui->Spin_Ti->setEnabled(false);
    ui->Spin_Td->setEnabled(false);
    ui->Temp_Prog->setValue(30);
    ui->Bot_Debug->setIcon(QIcon(":/pics/bug1.png"));
    ui->Bot_Debug->setEnabled(false);
    ui->groupBox_6->setVisible(false);
    ui->groupBox_7->setVisible(false);
    ui->checkBox->setChecked(false);
    ui->Bot_Envio->setEnabled(false);
    ui->Edit_Envio->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->Conectar_Com->setIcon(QIcon(":/pics/red-usb-disconnected-256.png"));
    flag_conn = false;
    MainWindow::SetupGraph();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Serial_Conf()
{
    serial->setPortName("COM3");                        //puerto com por el que nos comunicaremos con la placa adquisidora
    serial->setBaudRate(QSerialPort::Baud1200);         //configuramos los baudios para conexión serie
    serial->setDataBits(QSerialPort::Data8);            //cantidad de bits por dato
    serial->setParity(QSerialPort::NoParity);           //paridad
    serial->setStopBits(QSerialPort::OneStop);          //bit de stop
    serial->setFlowControl(QSerialPort::NoFlowControl); //control de flujo
}

void MainWindow::Serial_Conect()
{
    if((serial->open(QIODevice::ReadWrite)))                //indicador de conexión serie establecida
    {
        //ui->Set_Point->setEnabled(true);
        //ui->SetPoint->setEnabled(true);
        //ui->Spin_Kr->setEnabled(true);
        //ui->Spin_Ti->setEnabled(true);
        //ui->Spin_Td->setEnabled(true);
        ui->Temp_Prog->setValue(30);
        ui->Bot_Debug->setEnabled(true);
        ui->groupBox_6->setEnabled(true);
        ui->groupBox_7->setEnabled(true);
        ui->pushButton_3->setEnabled(false);
        ui->pushButton_4->setEnabled(true);
        ui->pushButton_4->setText("Iniciar");
        ui->Conectar_Com->setIcon(QIcon(":/pics/usbcon.png"));
        flag_conn = true;
        Iniciar_Horno();
    }
    else
        Serial_Error();
}

void MainWindow::Iniciar_Horno(void){
    char m = 0xFD;
    pedido_com.clear();
    pedido_com.append(m);                           // antes era una A - convertimos el dato solicitado para que la placa lo interprete
    QString Out;
    Out.clear();
    Out.append(pedido_com.toHex());
    ui->Dato_PC->setText(pedido_com);               // Label para testear la respuesta de la PC
    ui->label_6->setText(Out);
    ui->label_8->setText(QString::number(ui->label_6->text().toInt(&ok,16)));
    serial->write(pedido_com);                      //escribimos en el buffer
    serial->waitForBytesWritten(30);
    k = 1;
    SP_Seted = false;
}

void MainWindow::Serial_Desconect()
{
    //ui->Set_Point->setEnabled(false);
    ui->SetPoint->setEnabled(false);
    ui->Spin_Kr->setEnabled(false);
    ui->Spin_Ti->setEnabled(false);
    ui->Spin_Td->setEnabled(false);
    ui->Bot_Debug->setEnabled(false);
    ui->groupBox_6->setEnabled(false);
    ui->groupBox_7->setEnabled(false);
    ui->Conectar_Com->setIcon(QIcon(":/pics/red-usb-disconnected-256.png"));
    flag_conn = false;
    k = 0;
    serial->close();
}

void MainWindow::Serial_Error(){                        //mensaje en caso de error de conexión
    QMessageBox error;
    error.setText("Verifique la conexión de la placa.");
    error.setIcon(QMessageBox::Warning);
    error.exec();
}

void MainWindow::Serial_Pedir()                         //función encargada de pedir datos a la placa
{

    if(SP_Seted){
        k++;
        ui->label_25->setText(QString::number(k));
        serial->waitForReadyRead(10);
        if(serial->bytesAvailable() > 0)                    //en caso de bytes disponibles para lectura, lee
            datos_com = serial->readAll();
        QString Temp;
        Temp.clear();
        Temp.append(datos_com.toHex());
        int x = 0;
        x = Temp.toInt(&ok,16);             // Valor decimal de la temperatura leida
        if((x > 100)&&(x != 0x7E))
            x = xant;
        xant = x;
        ui->Dato_PIC->setText(datos_com);   // Label agregado para testear dato recibido a 1200 Baud
        ui->label_10->setText(datos_com.toHex());
        ui->label_12->setText(QString::number(Temp.toInt(&ok,16)));
        if(x == 0x7E){               // Me pide PID o Setpoint
            f++;
            ui->Pedido_SP->setText(QString::number(f));
            Enviar_SP();
        }
        else{
            int y = 0;
            ui->Temp_Hex->setText(QString::number(x));
            if (x < 30)
                y = 30;
            else if (x > 80)
                y = 80;
            else
                y = x;
            ui->Temp_Prog->setValue(y);
            yT = (float)x;
            CalcularPID();

        //-----------------------------------------
            //    QThread::msleep(300);
            datos_com.clear();
        //------Respuesta al pedido por USART------
            if((SP_Seted) && (x != 127)&&(!SP_Send))    // ((!flag_test) && (SP_Seted))
                Enviar();
            Graficar();

        }
        if(i < 200)
            i ++;
        else
        {   i = 0;
            ui->plot->graph(0)->removeDataBefore(250);
            ui->plot->graph(1)->removeDataBefore(250);
        }

    }
}
void MainWindow::Enviar()
{
    if(!BUG_Seted){
        char m;
        if(k == 1){                                     // Revisar condición
            m = TEMPERATURA_LIMITE;
            k = 1;
        }
//        else if(SP_Send == true){
//            //m = TEMPERATURA_LIMITE;
//                m=0xFD;
//            SP_Send = false;
        //}
        else{
            m = control;
        }
        pedido_com.clear();
        pedido_com.append(m);  //acá va m en vez de xant                         // antes era una A - convertimos el dato solicitado para que la placa lo interprete
        QString Out;
        Out.clear();
        Out.append(pedido_com.toHex());
        ui->Dato_PC->setText(pedido_com);               // Label para testear la respuesta de la PC
        ui->label_6->setText(Out);
        ui->label_8->setText(QString::number(ui->label_6->text().toInt(&ok,16)));
        serial->write(pedido_com);                      //escribimos en el buffer
        serial->waitForBytesWritten(30);
    }
}

void MainWindow::Enviar_SP(){
    char m = TEMPERATURA_LIMITE;
    pedido_com.clear();
    pedido_com.append(m);                           // antes era una A - convertimos el dato solicitado para que la placa lo interprete
    QString Out;
    Out.clear();
    Out.append(pedido_com.toHex());
    ui->Dato_PC->setText(pedido_com);               // Label para testear la respuesta de la PC
    ui->label_6->setText(Out);
    ui->label_8->setText(QString::number(ui->label_6->text().toInt(&ok,16)));
    serial->write(pedido_com);                      //escribimos en el buffer
    serial->waitForBytesWritten(30);
}

void MainWindow::CalcularPID()
{
    a = Kr; b = (Kr * Ts) / Ti; c = (Kr * Td) / Ts;
    rT = TEMPERATURA_LIMITE;
    e_k = rT - yT;
    pT = a * (e_k - e_k_1);
    iT = b * e_k;
    dT = c * (e_k_2 * e_k_1 + e_k_2);
    uT = uT_1 + pT + iT + dT;
    if (uT > max)
        uT = max;
    else{
        if(uT < min)
            uT = min;
    }
    control = (int)uT;                   // Dato calculado para enviar
    ui->Label_yT->setText(QString::number(yT));
    ui->Label_Kr->setText(QString::number(a));
    ui->Label_Ti->setText(QString::number(b));
    ui->Label_Td->setText(QString::number(c));
    ui->Label_ek->setText(QString::number(e_k));
    ui->Label_ek1->setText(QString::number(e_k_1));
    ui->Label_ek2->setText(QString::number(e_k_2));
    ui->Label_uT->setText(QString::number(uT));
    ui->Label_uT1->setText(QString::number(uT_1));
    ui->Label_rt->setText(QString::number(rT));

    iT0 = iT;
    eT0 = eT;
    uT_1 = uT; e_k_2 = e_k_1; e_k_1 = e_k;
    ui->DATO->setText(QString::number(control));
}

void MainWindow::Graficar()
{
//------------Gráfica Funcional-------------

//    if((yT - yant) > 10)          //probando horno de los vagos
//        yT = yant;
    ui->plot->graph(0)->addData(i, yT);                 //setData(xg, yg);
    ui->plot->graph(1)->addData(i, TEMPERATURA_LIMITE); //setData(xg, zg);
    ui->plot->graph(1)->setPen(QPen(Qt::red));
    ui->plot->replot();
}

void MainWindow::SetupGraph()
{
    ui->plot->addGraph();
    ui->plot->graph(0)->setName("Estado del Sistema");
    ui->plot->graph(0)->setPen(QPen(Qt::blue));
    ui->plot->addGraph();
    ui->plot->graph(1)->setName("Set Point");
    ui->plot->graph(1)->setPen(QPen(Qt::red));
    //ui->plot->addGraph();
    //ui->plot->graph(2)->setName("Señal de Control");
    //ui->plot->graph(2)->setPen(QPen(Qt::black));
    ui->plot->axisRect()->setupFullAxesBox();
    ui->plot->legend->setVisible(true);
    ui->plot->xAxis->setLabel("Samples");
    ui->plot->yAxis->setLabel("T ºC");
    ui->plot->xAxis->setRange(0, 249);
    ui->plot->yAxis->setRange(-10, 150);
}

void MainWindow::on_Conectar_Com_clicked()
{
    if(!flag_conn){
        Serial_Conect();
        Boton = true;
        //ui->Set_Point->setEnabled(false);
    }
    else{
        Serial_Desconect();
        //ui->Set_Point->setEnabled(true);
    }
}

void MainWindow::on_Desconectar_Com_clicked()
{
    Serial_Desconect();
}

void MainWindow::on_Set_Point_clicked()
{
    flag_test = true;
    TEMPERATURA_LIMITE = (int)ui->SetPoint->value();      // Ajuste del valor de ºC a mV
    i = 0;
    ui->plot->graph(0)->removeDataBefore(250);
    ui->plot->graph(1)->removeDataBefore(250);
    iT0 = 0;
    eT0 = 0;
    Kr = ui->Spin_Kr->value();
    Ti = ui->Spin_Ti->value();
    Td = ui->Spin_Td->value();
    uT_1 = 0; e_k_2 = 0; e_k_1 = 0; e_k = 0; uT = 0;
    if(!SP_Seted){
        Enviar_SP();
        SP_Seted = true;
    }


}

void MainWindow::Reinicio(){
    if(SP_Send == false){
        char m = 0xFD;
        pedido_com.clear();
        pedido_com.append(m);                           // antes era una A - convertimos el dato solicitado para que la placa lo interprete
        QString Out;
        Out.clear();
        Out.append(pedido_com.toHex());
        ui->Dato_PC->setText(pedido_com);               // Label para testear la respuesta de la PC
        ui->label_6->setText(Out);
        ui->label_8->setText(QString::number(ui->label_6->text().toInt(&ok,16)));
        serial->write(pedido_com);                      //escribimos en el buffer
        serial->waitForBytesWritten(30);
        SP_Send = true;
    }
    else{
        char m = TEMPERATURA_LIMITE;
        pedido_com.clear();
        pedido_com.append(m);                           // antes era una A - convertimos el dato solicitado para que la placa lo interprete
        QString Out;
        Out.clear();
        Out.append(pedido_com.toHex());
        ui->Dato_PC->setText(pedido_com);               // Label para testear la respuesta de la PC
        ui->label_6->setText(Out);
        ui->label_8->setText(QString::number(ui->label_6->text().toInt(&ok,16)));
        serial->write(pedido_com);                      //escribimos en el buffer
        serial->waitForBytesWritten(30);
        SP_Send = false;
    }
}

void MainWindow::on_Bot_Envio_clicked()
{
    flag_test = false;
    char m = ui->Edit_Envio->text().toInt(&ok,16);//QString::number(ui->Edit_Envio->text().toInt(&ok));
    pedido_com.clear();
    pedido_com.append(m);                            // antes era una A - convertimos el dato solicitado para que la placa lo interprete
    ui->Dato_PC->clear();
    ui->Dato_PC->setText(pedido_com);                // Label para testear la respuesta de la PC
    ui->label_6->setText(pedido_com.toHex());
    ui->label_8->setText(QString::number(ui->label_6->text().toInt(&ok,16)));
    serial->write(pedido_com);                        //escribimos en el buffer
    serial->waitForBytesWritten(30);
}

void MainWindow::on_checkBox_clicked()
{
    if(ui->checkBox->isChecked()){
        ui->Bot_Envio->setEnabled(true);
        ui->Edit_Envio->setEnabled(true);
        BUG_Seted = true;
    }
    else{
        ui->Bot_Envio->setEnabled(false);
        ui->Edit_Envio->setEnabled(false);
        BUG_Seted = false;
        Enviar();
    }
}

void MainWindow::on_Bot_Debug_clicked()
{
    if(ui->groupBox_6->isVisible()){
        ui->groupBox_6->setVisible(false);
        ui->groupBox_6->setEnabled(true);
        ui->groupBox_7->setVisible(false);
        ui->groupBox_7->setEnabled(true);
        ui->layoutWidget->setSizeIncrement(747,688);
        ui->Bot_Debug->setIcon(QIcon(":/pics/bug1.png"));
   }
   else{
        ui->groupBox_6->setVisible(true);
        ui->groupBox_7->setVisible(true);
        ui->Bot_Debug->setIcon(QIcon(":/pics/bug2.png"));
    }
}

void MainWindow::on_pushButton_clicked()
{
    char m;
    flag_test = true;
    m = 252;
    ui->check_calib->setText("Ajuste PC");
//    ui->pushButton_2->setText("Siguiente");
    pedido_com.clear();
    pedido_com.append(m);                           // antes era una A - convertimos el dato solicitado para que la placa lo interprete
    QString Out;
    Out.clear();
    Out.append(pedido_com.toHex());
    ui->Dato_PC->setText(pedido_com);               // Label para testear la respuesta de la PC
    ui->label_6->setText(Out);
    ui->label_8->setText(QString::number(ui->label_6->text().toInt(&ok,16)));
    serial->write(pedido_com);                      //escribimos en el buffer
    serial->waitForBytesWritten(30);
}

void MainWindow::on_pushButton_2_clicked()
{
    char m;
    flag_test = true;
    m = 254;
    ui->check_calib->setText("Ajuste Horno");
//    ui->pushButton_2->setText("Siguiente");
    pedido_com.clear();
    pedido_com.append(m);                           // antes era una A - convertimos el dato solicitado para que la placa lo interprete
    QString Out;
    Out.clear();
    Out.append(pedido_com.toHex());
    ui->Dato_PC->setText(pedido_com);               // Label para testear la respuesta de la PC
    ui->label_6->setText(Out);
    ui->label_8->setText(QString::number(ui->label_6->text().toInt(&ok,16)));
    serial->write(pedido_com);                      //escribimos en el buffer
    serial->waitForBytesWritten(30);
}

void MainWindow::on_pushButton_3_clicked()
{

            if((serial->open(QIODevice::ReadWrite)))                //indicador de conexión serie establecida
            {
                //ui->Set_Point->setEnabled(false);
                ui->SetPoint->setEnabled(false);
                ui->Spin_Kr->setEnabled(false);
                ui->Spin_Ti->setEnabled(false);
                ui->Spin_Td->setEnabled(false);
                ui->pushButton_4->setEnabled(true);
                ui->pushButton_4->setText("Detener");
                ui->pushButton_3->setEnabled(false);
                //ui->Bot_Debug->setEnabled(false);
                //ui->groupBox_6->setEnabled(false);
                //ui->groupBox_7->setEnabled(false);
                //ui->Conectar_Com->setIcon(QIcon(":/pics/orange-usb-connected-256.png"));
                flag_conn = true;

                char m = 0xFD;
                pedido_com.clear();
                pedido_com.append(m);                           // antes era una A - convertimos el dato solicitado para que la placa lo interprete
                QString Out;
                Out.clear();
                Out.append(pedido_com.toHex());
                ui->Dato_PC->setText(pedido_com);               // Label para testear la respuesta de la PC
                ui->label_6->setText(Out);
                ui->label_8->setText(QString::number(ui->label_6->text().toInt(&ok,16)));
                serial->write(pedido_com);                      //escribimos en el buffer
                serial->waitForBytesWritten(30);

                flag_test = true;
            TEMPERATURA_LIMITE = (int)ui->SetPoint->value();      // Ajuste del valor de ºC a mV
            i = 0;
            ui->plot->graph(0)->removeDataBefore(250);
            ui->plot->graph(1)->removeDataBefore(250);
            iT0 = 0;
            eT0 = 0;
            Kr = ui->Spin_Kr->value();
            Ti = ui->Spin_Ti->value();
            Td = ui->Spin_Td->value();
            uT_1 = 0; e_k_2 = 0; e_k_1 = 0; e_k = 0; uT = 0;
            if(!SP_Seted){
                Enviar_SP();
                SP_Seted = true;
            }
            //ui->Set_Point->setEnabled(false);
            }

}

void MainWindow::on_pushButton_4_clicked()
{
    if((flag_conn)&&(Boton == true)){
        //ui->Set_Point->setEnabled(true);

        ui->SetPoint->setEnabled(true);
        ui->Spin_Kr->setEnabled(true);
        ui->Spin_Ti->setEnabled(true);
        ui->Spin_Td->setEnabled(true);
        ui->Temp_Prog->setValue(30);
        ui->Bot_Debug->setEnabled(true);
        ui->groupBox_6->setEnabled(true);
        ui->pushButton_3->setEnabled(true);
        ui->pushButton_4->setEnabled(false);
        //ui->groupBox_7->setEnabled(true);
        //ui->Conectar_Com->setIcon(QIcon(":/pics/red-usb-disconnected-256.png"));
        flag_conn = false;
        k = 0;
        SP_Seted = false;
        //ui->Set_Point->setEnabled(true);
        serial->close();
}}
