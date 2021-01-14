#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QMessageBox>
#include <QString>
#include <QIntValidator>
#include <QFile>
#include <QTextStream>
#include <cmath>
#include <QGraphicsLineItem>
#include <QPen>
#include <qcustomplot.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void Serial_Conf();

    void Serial_Conect();

    void Serial_Desconect();

    void Serial_Error();

    void Serial_Pedir();

    void on_Conectar_Com_clicked();

    void on_Desconectar_Com_clicked();

    void on_Set_Point_clicked();

    void CalcularPID();

    void Graficar();

    void SetupGraph();

    void on_Bot_Envio_clicked();

    void on_checkBox_clicked();

    void on_Bot_Debug_clicked();

    void Enviar();

    void on_pushButton_clicked();

    void Enviar_SP();

    void on_pushButton_2_clicked();

    void Iniciar_Horno();

    void Reinicio();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;

    QSerialPort *serial;
};

#endif // MAINWINDOW_H
