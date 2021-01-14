/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *Conectar_Com;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Label_2;
    QDoubleSpinBox *Spin_Ti;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Label_3;
    QDoubleSpinBox *Spin_Td;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Label_1;
    QDoubleSpinBox *Spin_Kr;
    QHBoxLayout *horizontalLayout;
    QLabel *label_26;
    QDoubleSpinBox *SetPoint;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QGroupBox *groupBox_5;
    QPushButton *Bot_Debug;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QProgressBar *Temp_Prog;
    QVBoxLayout *verticalLayout_3;
    QLabel *Cantidad_Datos;
    QHBoxLayout *horizontalLayout_5;
    QLabel *Temp_Hex;
    QLabel *label;
    QGroupBox *groupBox_6;
    QWidget *layoutWidget2;
    QHBoxLayout *Lay_Debug;
    QHBoxLayout *horizontalLayout_17;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_13;
    QFrame *line_7;
    QLabel *DATO;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line_6;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_8;
    QLabel *Dato_PIC;
    QFrame *line;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_9;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_11;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line_4;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_7;
    QLabel *Dato_PC;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_6;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBox;
    QLineEdit *Edit_Envio;
    QPushButton *Bot_Envio;
    QSpacerItem *horizontalSpacer_13;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *check_calib;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout;
    QLabel *Label_uT1;
    QLabel *label_15;
    QLabel *label_20;
    QLabel *Label_ek1;
    QLabel *Label_Td;
    QLabel *label_14;
    QLabel *label_22;
    QLabel *label_18;
    QLabel *Label_ek2;
    QLabel *Label_Ti;
    QLabel *Label_yT;
    QLabel *label_17;
    QLabel *label_16;
    QLabel *Label_Kr;
    QLabel *label_19;
    QLabel *label_21;
    QLabel *Label_ek;
    QLabel *label_23;
    QLabel *Label_rt;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *Label_uT;
    QLabel *Pedido_SP;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_4;
    QCustomPlot *plot;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(560, 684);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QStringLiteral("11759494_10207668469818704_1100676622_n.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1);
        MainWindow->setIconSize(QSize(100, 100));
        MainWindow->setDocumentMode(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setDockNestingEnabled(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 71, 101));
        Conectar_Com = new QPushButton(groupBox);
        Conectar_Com->setObjectName(QStringLiteral("Conectar_Com"));
        Conectar_Com->setGeometry(QRect(10, 20, 51, 71));
        Conectar_Com->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Desktop/Sin t\303\255tulo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Conectar_Com->setIcon(icon1);
        Conectar_Com->setIconSize(QSize(60, 60));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(90, 10, 281, 151));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 261, 121));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Label_2 = new QLabel(layoutWidget);
        Label_2->setObjectName(QStringLiteral("Label_2"));
        QFont font;
        font.setPointSize(14);
        Label_2->setFont(font);
        Label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(Label_2);

        Spin_Ti = new QDoubleSpinBox(layoutWidget);
        Spin_Ti->setObjectName(QStringLiteral("Spin_Ti"));
        QFont font1;
        font1.setPointSize(11);
        Spin_Ti->setFont(font1);
        Spin_Ti->setAlignment(Qt::AlignCenter);
        Spin_Ti->setDecimals(3);
        Spin_Ti->setSingleStep(0.001);
        Spin_Ti->setValue(0.01);

        horizontalLayout_4->addWidget(Spin_Ti);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Label_3 = new QLabel(layoutWidget);
        Label_3->setObjectName(QStringLiteral("Label_3"));
        Label_3->setFont(font);
        Label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(Label_3);

        Spin_Td = new QDoubleSpinBox(layoutWidget);
        Spin_Td->setObjectName(QStringLiteral("Spin_Td"));
        Spin_Td->setFont(font1);
        Spin_Td->setAlignment(Qt::AlignCenter);
        Spin_Td->setDecimals(3);
        Spin_Td->setSingleStep(0.001);
        Spin_Td->setValue(0.01);

        horizontalLayout_2->addWidget(Spin_Td);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Label_1 = new QLabel(layoutWidget);
        Label_1->setObjectName(QStringLiteral("Label_1"));
        Label_1->setFont(font);
        Label_1->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(Label_1);

        Spin_Kr = new QDoubleSpinBox(layoutWidget);
        Spin_Kr->setObjectName(QStringLiteral("Spin_Kr"));
        Spin_Kr->setFont(font1);
        Spin_Kr->setAlignment(Qt::AlignCenter);
        Spin_Kr->setDecimals(3);
        Spin_Kr->setSingleStep(0.001);
        Spin_Kr->setValue(0.01);

        horizontalLayout_3->addWidget(Spin_Kr);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_26 = new QLabel(layoutWidget);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setFont(font);
        label_26->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_26);

        SetPoint = new QDoubleSpinBox(layoutWidget);
        SetPoint->setObjectName(QStringLiteral("SetPoint"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SetPoint->sizePolicy().hasHeightForWidth());
        SetPoint->setSizePolicy(sizePolicy1);
        SetPoint->setMaximumSize(QSize(500, 16777215));
        QFont font2;
        font2.setPointSize(10);
        SetPoint->setFont(font2);
        SetPoint->setAlignment(Qt::AlignCenter);
        SetPoint->setDecimals(0);
        SetPoint->setMinimum(30);
        SetPoint->setMaximum(80);
        SetPoint->setSingleStep(1);
        SetPoint->setValue(30);

        horizontalLayout->addWidget(SetPoint);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setFont(font1);
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);


        gridLayout_2->addLayout(horizontalLayout, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        pushButton_3->setFont(font3);

        horizontalLayout_7->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font3);

        horizontalLayout_7->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout_7);

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 110, 71, 51));
        Bot_Debug = new QPushButton(groupBox_5);
        Bot_Debug->setObjectName(QStringLiteral("Bot_Debug"));
        Bot_Debug->setGeometry(QRect(10, 20, 51, 20));
        Bot_Debug->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pics/bug1.png"), QSize(), QIcon::Normal, QIcon::Off);
        Bot_Debug->setIcon(icon2);
        Bot_Debug->setIconSize(QSize(15, 15));
        Bot_Debug->setAutoDefault(false);
        Bot_Debug->setFlat(false);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(380, 10, 171, 151));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 151, 121));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        Temp_Prog = new QProgressBar(layoutWidget1);
        Temp_Prog->setObjectName(QStringLiteral("Temp_Prog"));
        Temp_Prog->setMinimum(30);
        Temp_Prog->setMaximum(80);
        Temp_Prog->setValue(30);
        Temp_Prog->setTextVisible(false);
        Temp_Prog->setOrientation(Qt::Vertical);
        Temp_Prog->setInvertedAppearance(false);

        horizontalLayout_6->addWidget(Temp_Prog);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        Cantidad_Datos = new QLabel(layoutWidget1);
        Cantidad_Datos->setObjectName(QStringLiteral("Cantidad_Datos"));
        sizePolicy2.setHeightForWidth(Cantidad_Datos->sizePolicy().hasHeightForWidth());
        Cantidad_Datos->setSizePolicy(sizePolicy2);
        Cantidad_Datos->setMaximumSize(QSize(120, 30));
        QFont font4;
        font4.setPointSize(12);
        Cantidad_Datos->setFont(font4);
        Cantidad_Datos->setFrameShape(QFrame::NoFrame);
        Cantidad_Datos->setFrameShadow(QFrame::Plain);
        Cantidad_Datos->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(Cantidad_Datos);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Temp_Hex = new QLabel(layoutWidget1);
        Temp_Hex->setObjectName(QStringLiteral("Temp_Hex"));
        QFont font5;
        font5.setPointSize(48);
        Temp_Hex->setFont(font5);
        Temp_Hex->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(Temp_Hex);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setFont(font);

        horizontalLayout_5->addWidget(label);


        verticalLayout_3->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_3);

        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 260, 541, 121));
        layoutWidget2 = new QWidget(groupBox_6);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 521, 98));
        Lay_Debug = new QHBoxLayout(layoutWidget2);
        Lay_Debug->setSpacing(6);
        Lay_Debug->setContentsMargins(11, 11, 11, 11);
        Lay_Debug->setObjectName(QStringLiteral("Lay_Debug"));
        Lay_Debug->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_13 = new QLabel(layoutWidget2);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy2.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy2);
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_13);

        line_7 = new QFrame(layoutWidget2);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_7);

        DATO = new QLabel(layoutWidget2);
        DATO->setObjectName(QStringLiteral("DATO"));
        DATO->setEnabled(true);
        sizePolicy2.setHeightForWidth(DATO->sizePolicy().hasHeightForWidth());
        DATO->setSizePolicy(sizePolicy2);
        DATO->setMinimumSize(QSize(30, 0));
        DATO->setMaximumSize(QSize(30, 16777215));
        DATO->setFont(font);
        DATO->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_5->addWidget(DATO);


        horizontalLayout_17->addLayout(verticalLayout_5);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_2);

        line_6 = new QFrame(layoutWidget2);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_17->addWidget(line_6);

        horizontalSpacer_3 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_9->addWidget(label_4);

        horizontalSpacer_8 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);

        Dato_PIC = new QLabel(layoutWidget2);
        Dato_PIC->setObjectName(QStringLiteral("Dato_PIC"));
        Dato_PIC->setMaximumSize(QSize(16777215, 20));
        Dato_PIC->setFont(font1);
        Dato_PIC->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(Dato_PIC);


        verticalLayout_6->addLayout(horizontalLayout_9);

        line = new QFrame(layoutWidget2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_15->addWidget(label_9);

        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_15->addWidget(label_10);


        verticalLayout_6->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_16->addWidget(label_11);

        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_16->addWidget(label_12);


        verticalLayout_6->addLayout(horizontalLayout_16);


        horizontalLayout_17->addLayout(verticalLayout_6);

        horizontalSpacer_4 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_4);

        line_4 = new QFrame(layoutWidget2);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_17->addWidget(line_4);

        horizontalSpacer_5 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_12->addWidget(label_3);

        horizontalSpacer_7 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_7);

        Dato_PC = new QLabel(layoutWidget2);
        Dato_PC->setObjectName(QStringLiteral("Dato_PC"));
        Dato_PC->setMaximumSize(QSize(16777215, 20));
        Dato_PC->setFont(font1);
        Dato_PC->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(Dato_PC);


        verticalLayout_2->addLayout(horizontalLayout_12);

        line_2 = new QFrame(layoutWidget2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_13->addWidget(label_5);

        horizontalSpacer_10 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_10);

        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font6;
        font6.setPointSize(11);
        font6.setBold(false);
        font6.setWeight(50);
        label_6->setFont(font6);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_13->addWidget(label_6);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_14->addWidget(label_7);

        horizontalSpacer_11 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_11);

        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_14->addWidget(label_8);


        verticalLayout_2->addLayout(horizontalLayout_14);


        horizontalLayout_17->addLayout(verticalLayout_2);


        Lay_Debug->addLayout(horizontalLayout_17);

        horizontalSpacer_6 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        Lay_Debug->addItem(horizontalSpacer_6);

        line_3 = new QFrame(layoutWidget2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        Lay_Debug->addWidget(line_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetFixedSize);
        checkBox = new QCheckBox(layoutWidget2);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        sizePolicy1.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy1);
        checkBox->setMaximumSize(QSize(105, 16777215));
        checkBox->setFont(font1);

        verticalLayout_4->addWidget(checkBox);

        Edit_Envio = new QLineEdit(layoutWidget2);
        Edit_Envio->setObjectName(QStringLiteral("Edit_Envio"));
        sizePolicy1.setHeightForWidth(Edit_Envio->sizePolicy().hasHeightForWidth());
        Edit_Envio->setSizePolicy(sizePolicy1);
        Edit_Envio->setMaximumSize(QSize(104, 16777215));
        Edit_Envio->setInputMethodHints(Qt::ImhNone);
        Edit_Envio->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(Edit_Envio);

        Bot_Envio = new QPushButton(layoutWidget2);
        Bot_Envio->setObjectName(QStringLiteral("Bot_Envio"));
        sizePolicy1.setHeightForWidth(Bot_Envio->sizePolicy().hasHeightForWidth());
        Bot_Envio->setSizePolicy(sizePolicy1);
        Bot_Envio->setMaximumSize(QSize(105, 16777215));
        Bot_Envio->setFont(font3);
        Bot_Envio->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/pics/icon-venue-access.png"), QSize(), QIcon::Normal, QIcon::Off);
        Bot_Envio->setIcon(icon3);
        Bot_Envio->setIconSize(QSize(32, 32));
        Bot_Envio->setFlat(false);

        verticalLayout_4->addWidget(Bot_Envio);


        Lay_Debug->addLayout(verticalLayout_4);

        horizontalSpacer_13 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        Lay_Debug->addItem(horizontalSpacer_13);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetFixedSize);
        pushButton_2 = new QPushButton(layoutWidget2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMaximumSize(QSize(105, 16777215));
        pushButton_2->setFont(font3);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_7->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font3);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_7->addWidget(pushButton);

        check_calib = new QLabel(layoutWidget2);
        check_calib->setObjectName(QStringLiteral("check_calib"));
        sizePolicy2.setHeightForWidth(check_calib->sizePolicy().hasHeightForWidth());
        check_calib->setSizePolicy(sizePolicy2);
        check_calib->setMaximumSize(QSize(105, 16777215));
        check_calib->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(check_calib);


        Lay_Debug->addLayout(verticalLayout_7);

        groupBox_7 = new QGroupBox(centralWidget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 169, 541, 81));
        layoutWidget3 = new QWidget(groupBox_7);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 20, 521, 53));
        gridLayout = new QGridLayout(layoutWidget3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Label_uT1 = new QLabel(layoutWidget3);
        Label_uT1->setObjectName(QStringLiteral("Label_uT1"));
        Label_uT1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Label_uT1, 1, 8, 1, 1);

        label_15 = new QLabel(layoutWidget3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_15, 0, 1, 1, 1);

        label_20 = new QLabel(layoutWidget3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_20, 0, 7, 1, 1);

        Label_ek1 = new QLabel(layoutWidget3);
        Label_ek1->setObjectName(QStringLiteral("Label_ek1"));
        Label_ek1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Label_ek1, 1, 5, 1, 1);

        Label_Td = new QLabel(layoutWidget3);
        Label_Td->setObjectName(QStringLiteral("Label_Td"));
        Label_Td->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Label_Td, 1, 1, 1, 1);

        label_14 = new QLabel(layoutWidget3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_14, 0, 0, 1, 1);

        label_22 = new QLabel(layoutWidget3);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_22, 0, 9, 1, 1);

        label_18 = new QLabel(layoutWidget3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_18, 0, 5, 1, 1);

        Label_ek2 = new QLabel(layoutWidget3);
        Label_ek2->setObjectName(QStringLiteral("Label_ek2"));
        Label_ek2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Label_ek2, 1, 6, 1, 1);

        Label_Ti = new QLabel(layoutWidget3);
        Label_Ti->setObjectName(QStringLiteral("Label_Ti"));
        Label_Ti->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Label_Ti, 1, 2, 1, 2);

        Label_yT = new QLabel(layoutWidget3);
        Label_yT->setObjectName(QStringLiteral("Label_yT"));
        Label_yT->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Label_yT, 1, 9, 1, 1);

        label_17 = new QLabel(layoutWidget3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_17, 0, 4, 1, 1);

        label_16 = new QLabel(layoutWidget3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_16, 0, 2, 1, 2);

        Label_Kr = new QLabel(layoutWidget3);
        Label_Kr->setObjectName(QStringLiteral("Label_Kr"));
        Label_Kr->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Label_Kr, 1, 0, 1, 1);

        label_19 = new QLabel(layoutWidget3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_19, 0, 6, 1, 1);

        label_21 = new QLabel(layoutWidget3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_21, 0, 8, 1, 1);

        Label_ek = new QLabel(layoutWidget3);
        Label_ek->setObjectName(QStringLiteral("Label_ek"));
        Label_ek->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Label_ek, 1, 4, 1, 1);

        label_23 = new QLabel(layoutWidget3);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_23, 0, 10, 1, 1);

        Label_rt = new QLabel(layoutWidget3);
        Label_rt->setObjectName(QStringLiteral("Label_rt"));
        Label_rt->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Label_rt, 1, 10, 1, 1);

        label_24 = new QLabel(layoutWidget3);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_24, 0, 11, 1, 1);

        label_25 = new QLabel(layoutWidget3);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_25, 1, 11, 1, 1);

        Label_uT = new QLabel(layoutWidget3);
        Label_uT->setObjectName(QStringLiteral("Label_uT"));
        Label_uT->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Label_uT, 1, 7, 1, 1);

        Pedido_SP = new QLabel(centralWidget);
        Pedido_SP->setObjectName(QStringLiteral("Pedido_SP"));
        Pedido_SP->setGeometry(QRect(10, 620, 61, 21));
        QFont font7;
        font7.setPointSize(16);
        Pedido_SP->setFont(font7);
        Pedido_SP->setAlignment(Qt::AlignCenter);
        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_8 = new QVBoxLayout(layoutWidget4);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 380, 541, 231));
        sizePolicy1.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy1);
        plot = new QCustomPlot(groupBox_4);
        plot->setObjectName(QStringLiteral("plot"));
        plot->setGeometry(QRect(10, 20, 521, 201));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        Bot_Debug->setDefault(false);
        Bot_Envio->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Catena - Eppinger - Jat\303\263n", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Conexi\303\263n", 0));
        Conectar_Com->setText(QString());
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Controlador PID", 0));
        Label_2->setText(QApplication::translate("MainWindow", "Ti:", 0));
        Label_3->setText(QApplication::translate("MainWindow", "Td:", 0));
        Label_1->setText(QApplication::translate("MainWindow", "Kp:", 0));
        label_26->setText(QApplication::translate("MainWindow", "SP:", 0));
        label_2->setText(QApplication::translate("MainWindow", "\302\272C", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Cargar Valores", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Detener", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Ajuste", 0));
        Bot_Debug->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Temperatura", 0));
        Cantidad_Datos->setText(QApplication::translate("MainWindow", "Temperatura:", 0));
        Temp_Hex->setText(QApplication::translate("MainWindow", "0", 0));
        label->setText(QApplication::translate("MainWindow", "\302\272C", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Ajuste de USART", 0));
        label_13->setText(QApplication::translate("MainWindow", "PID", 0));
        DATO->setText(QApplication::translate("MainWindow", "00", 0));
        label_4->setText(QApplication::translate("MainWindow", "IN", 0));
        Dato_PIC->setText(QApplication::translate("MainWindow", "IN", 0));
        label_9->setText(QApplication::translate("MainWindow", "HEX", 0));
        label_10->setText(QApplication::translate("MainWindow", "00", 0));
        label_11->setText(QApplication::translate("MainWindow", "DEC", 0));
        label_12->setText(QApplication::translate("MainWindow", "00", 0));
        label_3->setText(QApplication::translate("MainWindow", "OUT", 0));
        Dato_PC->setText(QApplication::translate("MainWindow", "OUT", 0));
        label_5->setText(QApplication::translate("MainWindow", "HEX", 0));
        label_6->setText(QApplication::translate("MainWindow", "00", 0));
        label_7->setText(QApplication::translate("MainWindow", "DEC", 0));
        label_8->setText(QApplication::translate("MainWindow", "00", 0));
        checkBox->setText(QApplication::translate("MainWindow", "Manual", 0));
        Bot_Envio->setText(QApplication::translate("MainWindow", "Envio", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Calibrar PC", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Calibrar Horno", 0));
        check_calib->setText(QString());
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Control de PID", 0));
        Label_uT1->setText(QString());
        label_15->setText(QApplication::translate("MainWindow", "Td", 0));
        label_20->setText(QApplication::translate("MainWindow", "uT", 0));
        Label_ek1->setText(QString());
        Label_Td->setText(QString());
        label_14->setText(QApplication::translate("MainWindow", "Kr", 0));
        label_22->setText(QApplication::translate("MainWindow", "yT", 0));
        label_18->setText(QApplication::translate("MainWindow", "ek1", 0));
        Label_ek2->setText(QString());
        Label_Ti->setText(QString());
        Label_yT->setText(QString());
        label_17->setText(QApplication::translate("MainWindow", "ek", 0));
        label_16->setText(QApplication::translate("MainWindow", "Ti", 0));
        Label_Kr->setText(QString());
        label_19->setText(QApplication::translate("MainWindow", "ek2", 0));
        label_21->setText(QApplication::translate("MainWindow", "uT-1", 0));
        Label_ek->setText(QString());
        label_23->setText(QApplication::translate("MainWindow", "SP", 0));
        Label_rt->setText(QString());
        label_24->setText(QApplication::translate("MainWindow", "k", 0));
        label_25->setText(QString());
        Label_uT->setText(QString());
        Pedido_SP->setText(QApplication::translate("MainWindow", "N\302\272 SP", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Respuesta del Sistema", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
