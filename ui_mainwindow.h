/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *WelcomePage;
    QLabel *LiamLogo;
    QPushButton *WelcomeButton;
    QWidget *BedType;
    QLabel *ResHeader;
    QPushButton *ResProceedButton;
    QLineEdit *ResInput;
    QWidget *page;
    QPushButton *QueenButton;
    QPushButton *KingButton;
    QLabel *StayLabel;
    QWidget *page_2;
    QPushButton *StandardButton;
    QPushButton *AtriumButton;
    QLabel *QueenButton_2;
    QWidget *page_3;
    QSpinBox *NumNightsBox;
    QFrame *line;
    QPushButton *ProceedDatesBttn;
    QLabel *QueenButton_3;
    QFrame *frame_2;
    QCalendarWidget *CalendarWidget;
    QWidget *page_4;
    QLabel *label_2;
    QLabel *label_3;
    QCheckBox *ParkingCheckBox;
    QSpinBox *NumKidsBox;
    QSpinBox *NumAdultsBox;
    QPushButton *ProceedGuests;
    QLabel *QueenButton_4;
    QWidget *page_5;
    QPushButton *ProceedCharges;
    QFrame *frame_3;
    QLabel *TotalCost;
    QLabel *TotalChargeBox;
    QLabel *label;
    QLabel *Subtotal;
    QLabel *SubtotalLabel;
    QLabel *SubtotalAmount;
    QLabel *TaxAmount;
    QFrame *frame_6;
    QFrame *frame_7;
    QLabel *RoomTypeEdit_5;
    QLabel *RoomTypeLabel_5;
    QLabel *ParkingLabel;
    QLabel *ParkingTypeEdit;
    QFrame *frame_8;
    QFrame *frame_9;
    QLabel *RoomTypeEdit_6;
    QLabel *RoomTypeLabel_6;
    QLabel *BedType_2;
    QLabel *BedTypeEdit;
    QFrame *frame_4;
    QLabel *RoomTypeEdit;
    QLabel *RoomTypeLabel_2;
    QFrame *frame_5;
    QLabel *RoomTypeEdit_3;
    QLabel *RoomTypeLabel_3;
    QFrame *frame_10;
    QLabel *label_5;
    QLabel *PayButtonCharge;
    QPushButton *pushButton;
    QWidget *page_6;
    QRadioButton *VisaRadio;
    QRadioButton *MasterRadio;
    QRadioButton *AmericanRadio;
    QRadioButton *DiscoRadio;
    QPushButton *PayNowButton;
    QLineEdit *CreditInfo;
    QFrame *frame;
    QLabel *label_4;
    QLabel *ExpLabel;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QWidget *page_7;
    QPushButton *ConfirmButton;
    QFrame *frame_41;
    QLabel *ResOutput;
    QLabel *label_28;
    QFrame *frame_42;
    QLabel *label_21;
    QLabel *FirstOutput;
    QFrame *frame_43;
    QLabel *label_23;
    QLabel *ParkOutput;
    QFrame *frame_44;
    QLabel *label_24;
    QLabel *NumAdultsOutput;
    QFrame *frame_59;
    QLabel *NumKidsOutput;
    QLabel *label_25;
    QFrame *frame_60;
    QLabel *label_26;
    QLabel *CreditOutput;
    QLabel *label_27;
    QLabel *TotalOutput;
    QLabel *label_43;
    QFrame *frame_61;
    QLabel *label_22;
    QLabel *NumNightsOutput;
    QLabel *label_45;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(60, 10, 700, 521));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(68, 67, 85, 228);"));
        WelcomePage = new QWidget();
        WelcomePage->setObjectName(QString::fromUtf8("WelcomePage"));
        LiamLogo = new QLabel(WelcomePage);
        LiamLogo->setObjectName(QString::fromUtf8("LiamLogo"));
        LiamLogo->setGeometry(QRect(175, 70, 371, 91));
        LiamLogo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        WelcomeButton = new QPushButton(WelcomePage);
        WelcomeButton->setObjectName(QString::fromUtf8("WelcomeButton"));
        WelcomeButton->setGeometry(QRect(290, 230, 125, 125));
        QFont font;
        font.setFamily(QString::fromUtf8("Baskerville"));
        font.setPointSize(20);
        WelcomeButton->setFont(font);
        WelcomeButton->setCursor(QCursor(Qt::PointingHandCursor));
        WelcomeButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	background-color: rgb(25, 25, 25);\n"
"	border-radius: 62%;\n"
"	color:rgb(255, 255, 255);\n"
"	border: 2px solid white;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border-color: rgb(25, 25, 25);\n"
"	background-color:  rgb(0, 142, 209);\n"
"	\n"
"	color: rgb(100, 98, 113);\n"
"	border-size: 3px;\n"
"	border: 3px solid ;\n"
"	\n"
"\n"
"\n"
"}"));
        stackedWidget->addWidget(WelcomePage);
        BedType = new QWidget();
        BedType->setObjectName(QString::fromUtf8("BedType"));
        ResHeader = new QLabel(BedType);
        ResHeader->setObjectName(QString::fromUtf8("ResHeader"));
        ResHeader->setGeometry(QRect(60, 60, 561, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(24);
        font1.setBold(false);
        font1.setWeight(50);
        ResHeader->setFont(font1);
        ResHeader->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        ResHeader->setFrameShape(QFrame::Box);
        ResHeader->setAlignment(Qt::AlignCenter);
        ResProceedButton = new QPushButton(BedType);
        ResProceedButton->setObjectName(QString::fromUtf8("ResProceedButton"));
        ResProceedButton->setGeometry(QRect(287, 250, 126, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Baskerville"));
        font2.setPointSize(15);
        ResProceedButton->setFont(font2);
        ResProceedButton->setCursor(QCursor(Qt::PointingHandCursor));
        ResProceedButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	background-color: rgb(25, 25, 25);\n"
"	border-radius: 62%;\n"
"	color:rgb(255, 255, 255);\n"
"	border: 2px solid white;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border-color: rgb(25, 25, 25);\n"
"	background-color: rgb(0, 142, 209);\n"
"	\n"
"\n"
"	border-size: 3px;\n"
"	border: 3px solid ;\n"
"\n"
"\n"
"}"));
        ResInput = new QLineEdit(BedType);
        ResInput->setObjectName(QString::fromUtf8("ResInput"));
        ResInput->setGeometry(QRect(245, 180, 210, 29));
        QFont font3;
        font3.setPointSize(15);
        ResInput->setFont(font3);
        ResInput->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border: 2px solid white;"));
        ResInput->setInputMask(QString::fromUtf8(""));
        ResInput->setMaxLength(32767);
        ResInput->setDragEnabled(false);
        ResInput->setClearButtonEnabled(false);
        stackedWidget->addWidget(BedType);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        QueenButton = new QPushButton(page);
        QueenButton->setObjectName(QString::fromUtf8("QueenButton"));
        QueenButton->setGeometry(QRect(355, 180, 125, 125));
        QueenButton->setFont(font);
        QueenButton->setCursor(QCursor(Qt::PointingHandCursor));
        QueenButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"\n"
"{\n"
"	background-color: rgb(25, 25, 25);\n"
"	border-radius: 62%;\n"
"	color:rgb(255, 255, 255);\n"
"border: 2px solid white;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border-color: rgb(25, 25, 25);\n"
"background-color: rgb(255, 253, 200);\n"
"	color: rgb(25, 25, 25);\n"
"	border-size: 3px;\n"
"	border: 3px solid ;\n"
"	color: rgb(20, 20, 20);\n"
"\n"
"\n"
"}"));
        KingButton = new QPushButton(page);
        KingButton->setObjectName(QString::fromUtf8("KingButton"));
        KingButton->setGeometry(QRect(205, 180, 125, 125));
        KingButton->setFont(font);
        KingButton->setCursor(QCursor(Qt::PointingHandCursor));
        KingButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"\n"
"{\n"
"	background-color: rgb(25, 25, 25);\n"
"	border-radius: 62%;\n"
"	color:rgb(255, 255, 255);\n"
"border: 2px solid white;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border-color: rgb(25, 25, 25);\n"
"background-color: rgb(255, 253, 200);\n"
"	color: rgb(25, 25, 25);\n"
"	border-size: 3px;\n"
"	border: 3px solid ;\n"
"	color: rgb(20, 20, 20);\n"
"\n"
"\n"
"}"));
        StayLabel = new QLabel(page);
        StayLabel->setObjectName(QString::fromUtf8("StayLabel"));
        StayLabel->setGeometry(QRect(60, 60, 561, 51));
        StayLabel->setFont(font1);
        StayLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        StayLabel->setFrameShape(QFrame::Box);
        StayLabel->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        StandardButton = new QPushButton(page_2);
        StandardButton->setObjectName(QString::fromUtf8("StandardButton"));
        StandardButton->setGeometry(QRect(355, 190, 125, 125));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Baskerville"));
        font4.setPointSize(18);
        StandardButton->setFont(font4);
        StandardButton->setCursor(QCursor(Qt::PointingHandCursor));
        StandardButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"\n"
"{\n"
"	background-color: rgb(25, 25, 25);\n"
"	border-radius: 62%;\n"
"	color:rgb(255, 255, 255);\n"
"border: 2px solid white;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border-color: rgb(25, 25, 25);\n"
"background-color: rgb(255, 253, 200);\n"
"	color: rgb(25, 25, 25);\n"
"	border-size: 3px;\n"
"	border: 3px solid ;\n"
"	color: rgb(20, 20, 20);\n"
"\n"
"\n"
"}"));
        AtriumButton = new QPushButton(page_2);
        AtriumButton->setObjectName(QString::fromUtf8("AtriumButton"));
        AtriumButton->setGeometry(QRect(205, 190, 125, 125));
        AtriumButton->setFont(font4);
        AtriumButton->setCursor(QCursor(Qt::PointingHandCursor));
        AtriumButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"\n"
"{\n"
"	background-color: rgb(25, 25, 25);\n"
"	border-radius: 62%;\n"
"	color:rgb(255, 255, 255);\n"
"border: 2px solid white;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border-color: rgb(25, 25, 25);\n"
"background-color: rgb(255, 253, 200);\n"
"	color: rgb(25, 25, 25);\n"
"	border-size: 3px;\n"
"	border: 3px solid ;\n"
"	color: rgb(20, 20, 20);\n"
"\n"
"\n"
"}"));
        QueenButton_2 = new QLabel(page_2);
        QueenButton_2->setObjectName(QString::fromUtf8("QueenButton_2"));
        QueenButton_2->setGeometry(QRect(60, 60, 561, 51));
        QueenButton_2->setFont(font1);
        QueenButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        QueenButton_2->setFrameShape(QFrame::Box);
        QueenButton_2->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        NumNightsBox = new QSpinBox(page_3);
        NumNightsBox->setObjectName(QString::fromUtf8("NumNightsBox"));
        NumNightsBox->setGeometry(QRect(480, 170, 61, 211));
        QFont font5;
        font5.setPointSize(18);
        NumNightsBox->setFont(font5);
        NumNightsBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border: 2px solid white;"));
        NumNightsBox->setAlignment(Qt::AlignCenter);
        NumNightsBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        line = new QFrame(page_3);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(430, 160, 20, 231));
        line->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::VLine);
        ProceedDatesBttn = new QPushButton(page_3);
        ProceedDatesBttn->setObjectName(QString::fromUtf8("ProceedDatesBttn"));
        ProceedDatesBttn->setGeometry(QRect(320, 430, 125, 41));
        ProceedDatesBttn->setFont(font2);
        ProceedDatesBttn->setCursor(QCursor(Qt::PointingHandCursor));
        ProceedDatesBttn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"\n"
"{\n"
"	background-color: rgb(25, 25, 25);\n"
"	border-radius: 62%;\n"
"	color:rgb(255, 255, 255);\n"
"border: 2px solid white;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border-color: rgb(25, 25, 25);\n"
"background-color: rgb(255, 253, 200);\n"
"	color: rgb(25, 25, 25);\n"
"	border-size: 3px;\n"
"	border: 3px solid ;\n"
"	color: rgb(20, 20, 20);\n"
"\n"
"\n"
"}"));
        QueenButton_3 = new QLabel(page_3);
        QueenButton_3->setObjectName(QString::fromUtf8("QueenButton_3"));
        QueenButton_3->setGeometry(QRect(60, 60, 561, 51));
        QueenButton_3->setFont(font1);
        QueenButton_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        QueenButton_3->setFrameShape(QFrame::Box);
        QueenButton_3->setAlignment(Qt::AlignCenter);
        frame_2 = new QFrame(page_3);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(130, 170, 271, 211));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        CalendarWidget = new QCalendarWidget(frame_2);
        CalendarWidget->setObjectName(QString::fromUtf8("CalendarWidget"));
        CalendarWidget->setGeometry(QRect(0, 0, 272, 211));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        CalendarWidget->setPalette(palette);
        CalendarWidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_2 = new QLabel(page_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 130, 140, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(page_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(360, 130, 140, 20));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        ParkingCheckBox = new QCheckBox(page_4);
        ParkingCheckBox->setObjectName(QString::fromUtf8("ParkingCheckBox"));
        ParkingCheckBox->setGeometry(QRect(240, 330, 201, 35));
        ParkingCheckBox->setLayoutDirection(Qt::LeftToRight);
        ParkingCheckBox->setAutoFillBackground(false);
        ParkingCheckBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border: 2px solid white;"));
        NumKidsBox = new QSpinBox(page_4);
        NumKidsBox->setObjectName(QString::fromUtf8("NumKidsBox"));
        NumKidsBox->setGeometry(QRect(390, 180, 61, 131));
        NumKidsBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"border: 2px solid white;"));
        NumKidsBox->setAlignment(Qt::AlignCenter);
        NumKidsBox->setMaximum(99);
        NumAdultsBox = new QSpinBox(page_4);
        NumAdultsBox->setObjectName(QString::fromUtf8("NumAdultsBox"));
        NumAdultsBox->setGeometry(QRect(240, 180, 61, 131));
        NumAdultsBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border: 2px solid white;"));
        NumAdultsBox->setAlignment(Qt::AlignCenter);
        NumAdultsBox->setMinimum(1);
        NumAdultsBox->setMaximum(3);
        ProceedGuests = new QPushButton(page_4);
        ProceedGuests->setObjectName(QString::fromUtf8("ProceedGuests"));
        ProceedGuests->setGeometry(QRect(280, 410, 125, 41));
        ProceedGuests->setFont(font2);
        ProceedGuests->setCursor(QCursor(Qt::PointingHandCursor));
        ProceedGuests->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"\n"
"{\n"
"	background-color: rgb(25, 25, 25);\n"
"	border-radius: 62%;\n"
"	color:rgb(255, 255, 255);\n"
"border: 2px solid white;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border-color: rgb(25, 25, 25);\n"
"background-color: rgb(255, 253, 200);\n"
"	color: rgb(25, 25, 25);\n"
"	border-size: 3px;\n"
"	border: 3px solid ;\n"
"	color: rgb(20, 20, 20);\n"
"\n"
"\n"
"}"));
        QueenButton_4 = new QLabel(page_4);
        QueenButton_4->setObjectName(QString::fromUtf8("QueenButton_4"));
        QueenButton_4->setGeometry(QRect(60, 60, 561, 51));
        QueenButton_4->setFont(font1);
        QueenButton_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        QueenButton_4->setFrameShape(QFrame::Box);
        QueenButton_4->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        ProceedCharges = new QPushButton(page_5);
        ProceedCharges->setObjectName(QString::fromUtf8("ProceedCharges"));
        ProceedCharges->setGeometry(QRect(100, 430, 521, 41));
        ProceedCharges->setCursor(QCursor(Qt::PointingHandCursor));
        ProceedCharges->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-color: rgb(25, 25, 25);\n"
"	background-color: rgb(255, 253, 200);\n"
"	color: rgb(25, 25, 25);\n"
"	border-size: 3px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"\n"
"	border: 5px solid black;\n"
"\n"
"}"));
        frame_3 = new QFrame(page_5);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(180, 300, 351, 121));
        frame_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(204, 204, 204);"));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Plain);
        TotalCost = new QLabel(frame_3);
        TotalCost->setObjectName(QString::fromUtf8("TotalCost"));
        TotalCost->setGeometry(QRect(10, 80, 101, 31));
        QFont font6;
        font6.setBold(true);
        font6.setWeight(75);
        TotalCost->setFont(font6);
        TotalCost->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        TotalChargeBox = new QLabel(frame_3);
        TotalChargeBox->setObjectName(QString::fromUtf8("TotalChargeBox"));
        TotalChargeBox->setGeometry(QRect(220, 80, 101, 31));
        TotalChargeBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        TotalChargeBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label = new QLabel(frame_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 80, 16, 31));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Subtotal = new QLabel(frame_3);
        Subtotal->setObjectName(QString::fromUtf8("Subtotal"));
        Subtotal->setGeometry(QRect(10, 50, 101, 21));
        QFont font7;
        font7.setPointSize(10);
        font7.setBold(false);
        font7.setWeight(50);
        Subtotal->setFont(font7);
        Subtotal->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        SubtotalLabel = new QLabel(frame_3);
        SubtotalLabel->setObjectName(QString::fromUtf8("SubtotalLabel"));
        SubtotalLabel->setGeometry(QRect(10, 10, 101, 21));
        SubtotalLabel->setFont(font7);
        SubtotalLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        SubtotalAmount = new QLabel(frame_3);
        SubtotalAmount->setObjectName(QString::fromUtf8("SubtotalAmount"));
        SubtotalAmount->setGeometry(QRect(220, 10, 101, 21));
        QFont font8;
        font8.setBold(false);
        font8.setWeight(50);
        SubtotalAmount->setFont(font8);
        SubtotalAmount->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        TaxAmount = new QLabel(frame_3);
        TaxAmount->setObjectName(QString::fromUtf8("TaxAmount"));
        TaxAmount->setGeometry(QRect(220, 50, 101, 21));
        TaxAmount->setFont(font8);
        TaxAmount->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        frame_6 = new QFrame(page_5);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(180, 160, 351, 51));
        frame_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(204, 204, 204);"));
        frame_6->setFrameShape(QFrame::Box);
        frame_6->setFrameShadow(QFrame::Plain);
        frame_7 = new QFrame(frame_6);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(330, 70, 351, 71));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        RoomTypeEdit_5 = new QLabel(frame_7);
        RoomTypeEdit_5->setObjectName(QString::fromUtf8("RoomTypeEdit_5"));
        RoomTypeEdit_5->setGeometry(QRect(190, 20, 151, 31));
        RoomTypeEdit_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        RoomTypeLabel_5 = new QLabel(frame_7);
        RoomTypeLabel_5->setObjectName(QString::fromUtf8("RoomTypeLabel_5"));
        RoomTypeLabel_5->setGeometry(QRect(20, 20, 101, 31));
        RoomTypeLabel_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        ParkingLabel = new QLabel(frame_6);
        ParkingLabel->setObjectName(QString::fromUtf8("ParkingLabel"));
        ParkingLabel->setGeometry(QRect(20, 10, 77, 31));
        ParkingLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        ParkingTypeEdit = new QLabel(frame_6);
        ParkingTypeEdit->setObjectName(QString::fromUtf8("ParkingTypeEdit"));
        ParkingTypeEdit->setGeometry(QRect(230, 10, 101, 31));
        ParkingTypeEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        ParkingTypeEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame_8 = new QFrame(page_5);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(180, 220, 351, 51));
        frame_8->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(204, 204, 204);"));
        frame_8->setFrameShape(QFrame::WinPanel);
        frame_8->setFrameShadow(QFrame::Plain);
        frame_9 = new QFrame(frame_8);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setGeometry(QRect(330, 70, 351, 71));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        RoomTypeEdit_6 = new QLabel(frame_9);
        RoomTypeEdit_6->setObjectName(QString::fromUtf8("RoomTypeEdit_6"));
        RoomTypeEdit_6->setGeometry(QRect(190, 20, 151, 31));
        RoomTypeEdit_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        RoomTypeLabel_6 = new QLabel(frame_9);
        RoomTypeLabel_6->setObjectName(QString::fromUtf8("RoomTypeLabel_6"));
        RoomTypeLabel_6->setGeometry(QRect(20, 20, 101, 31));
        RoomTypeLabel_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        BedType_2 = new QLabel(frame_8);
        BedType_2->setObjectName(QString::fromUtf8("BedType_2"));
        BedType_2->setGeometry(QRect(20, 10, 91, 31));
        BedType_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        BedTypeEdit = new QLabel(frame_8);
        BedTypeEdit->setObjectName(QString::fromUtf8("BedTypeEdit"));
        BedTypeEdit->setGeometry(QRect(240, 10, 91, 31));
        BedTypeEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        BedTypeEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame_4 = new QFrame(page_5);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(180, 100, 351, 51));
        frame_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(204, 204, 204);"));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Plain);
        RoomTypeEdit = new QLabel(frame_4);
        RoomTypeEdit->setObjectName(QString::fromUtf8("RoomTypeEdit"));
        RoomTypeEdit->setGeometry(QRect(220, 10, 111, 31));
        RoomTypeEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        RoomTypeEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RoomTypeLabel_2 = new QLabel(frame_4);
        RoomTypeLabel_2->setObjectName(QString::fromUtf8("RoomTypeLabel_2"));
        RoomTypeLabel_2->setGeometry(QRect(20, 10, 101, 31));
        RoomTypeLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        frame_5 = new QFrame(frame_4);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(330, 70, 351, 71));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        RoomTypeEdit_3 = new QLabel(frame_5);
        RoomTypeEdit_3->setObjectName(QString::fromUtf8("RoomTypeEdit_3"));
        RoomTypeEdit_3->setGeometry(QRect(190, 20, 151, 31));
        RoomTypeEdit_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        RoomTypeLabel_3 = new QLabel(frame_5);
        RoomTypeLabel_3->setObjectName(QString::fromUtf8("RoomTypeLabel_3"));
        RoomTypeLabel_3->setGeometry(QRect(20, 20, 101, 31));
        RoomTypeLabel_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frame_10 = new QFrame(page_5);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setGeometry(QRect(270, 10, 151, 61));
        QFont font9;
        font9.setPointSize(24);
        frame_10->setFont(font9);
        frame_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frame_10->setFrameShape(QFrame::Box);
        frame_10->setFrameShadow(QFrame::Plain);
        label_5 = new QLabel(frame_10);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 20, 131, 20));
        label_5->setFont(font4);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5->setAlignment(Qt::AlignCenter);
        PayButtonCharge = new QLabel(page_5);
        PayButtonCharge->setObjectName(QString::fromUtf8("PayButtonCharge"));
        PayButtonCharge->setGeometry(QRect(410, 440, 81, 21));
        PayButtonCharge->setStyleSheet(QString::fromUtf8("	background-color: rgb(255, 253, 200);"));
        pushButton = new QPushButton(page_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 470, 521, 41));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushbutton\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border: 2 px solid  rgb(255, 255, 169);\n"
"color: rgb(255, 253, 200);\n"
"}\n"
""));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        VisaRadio = new QRadioButton(page_6);
        VisaRadio->setObjectName(QString::fromUtf8("VisaRadio"));
        VisaRadio->setGeometry(QRect(220, 170, 127, 25));
        VisaRadio->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        MasterRadio = new QRadioButton(page_6);
        MasterRadio->setObjectName(QString::fromUtf8("MasterRadio"));
        MasterRadio->setGeometry(QRect(220, 220, 127, 25));
        MasterRadio->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        AmericanRadio = new QRadioButton(page_6);
        AmericanRadio->setObjectName(QString::fromUtf8("AmericanRadio"));
        AmericanRadio->setGeometry(QRect(370, 170, 127, 25));
        AmericanRadio->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        DiscoRadio = new QRadioButton(page_6);
        DiscoRadio->setObjectName(QString::fromUtf8("DiscoRadio"));
        DiscoRadio->setGeometry(QRect(370, 220, 127, 25));
        DiscoRadio->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        PayNowButton = new QPushButton(page_6);
        PayNowButton->setObjectName(QString::fromUtf8("PayNowButton"));
        PayNowButton->setGeometry(QRect(298, 350, 104, 32));
        PayNowButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(57, 121, 253);"));
        CreditInfo = new QLineEdit(page_6);
        CreditInfo->setObjectName(QString::fromUtf8("CreditInfo"));
        CreditInfo->setGeometry(QRect(210, 270, 281, 29));
        CreditInfo->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border: 2px solid white;"));
        CreditInfo->setAlignment(Qt::AlignCenter);
        frame = new QFrame(page_6);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(275, 60, 151, 61));
        QFont font10;
        font10.setPointSize(17);
        frame->setFont(font10);
        frame->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 20, 131, 20));
        QFont font11;
        font11.setFamily(QString::fromUtf8("Baskerville"));
        font11.setPointSize(17);
        label_4->setFont(font11);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignCenter);
        ExpLabel = new QLabel(page_6);
        ExpLabel->setObjectName(QString::fromUtf8("ExpLabel"));
        ExpLabel->setGeometry(QRect(230, 320, 90, 30));
        spinBox = new QSpinBox(page_6);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(350, 320, 42, 23));
        spinBox->setMaximum(12);
        spinBox_2 = new QSpinBox(page_6);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(400, 320, 42, 23));
        spinBox_2->setMinimum(20);
        spinBox_2->setMaximum(50);
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        ConfirmButton = new QPushButton(page_7);
        ConfirmButton->setObjectName(QString::fromUtf8("ConfirmButton"));
        ConfirmButton->setGeometry(QRect(180, 480, 311, 32));
        ConfirmButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frame_41 = new QFrame(page_7);
        frame_41->setObjectName(QString::fromUtf8("frame_41"));
        frame_41->setGeometry(QRect(120, 70, 441, 41));
        frame_41->setFrameShape(QFrame::StyledPanel);
        frame_41->setFrameShadow(QFrame::Raised);
        ResOutput = new QLabel(frame_41);
        ResOutput->setObjectName(QString::fromUtf8("ResOutput"));
        ResOutput->setGeometry(QRect(270, 10, 131, 20));
        ResOutput->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        ResOutput->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_28 = new QLabel(frame_41);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(20, 10, 151, 20));
        label_28->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frame_42 = new QFrame(page_7);
        frame_42->setObjectName(QString::fromUtf8("frame_42"));
        frame_42->setGeometry(QRect(120, 110, 441, 41));
        frame_42->setFrameShape(QFrame::StyledPanel);
        frame_42->setFrameShadow(QFrame::Raised);
        label_21 = new QLabel(frame_42);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(20, 10, 151, 20));
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        FirstOutput = new QLabel(frame_42);
        FirstOutput->setObjectName(QString::fromUtf8("FirstOutput"));
        FirstOutput->setGeometry(QRect(290, 10, 111, 20));
        FirstOutput->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        FirstOutput->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame_43 = new QFrame(page_7);
        frame_43->setObjectName(QString::fromUtf8("frame_43"));
        frame_43->setGeometry(QRect(120, 190, 441, 41));
        frame_43->setFrameShape(QFrame::StyledPanel);
        frame_43->setFrameShadow(QFrame::Raised);
        label_23 = new QLabel(frame_43);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(20, 10, 151, 20));
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        ParkOutput = new QLabel(frame_43);
        ParkOutput->setObjectName(QString::fromUtf8("ParkOutput"));
        ParkOutput->setGeometry(QRect(310, 10, 91, 20));
        ParkOutput->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        ParkOutput->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame_44 = new QFrame(page_7);
        frame_44->setObjectName(QString::fromUtf8("frame_44"));
        frame_44->setGeometry(QRect(120, 230, 441, 41));
        frame_44->setFrameShape(QFrame::StyledPanel);
        frame_44->setFrameShadow(QFrame::Raised);
        label_24 = new QLabel(frame_44);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(20, 10, 151, 20));
        label_24->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        NumAdultsOutput = new QLabel(frame_44);
        NumAdultsOutput->setObjectName(QString::fromUtf8("NumAdultsOutput"));
        NumAdultsOutput->setGeometry(QRect(320, 10, 81, 20));
        NumAdultsOutput->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        NumAdultsOutput->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame_59 = new QFrame(page_7);
        frame_59->setObjectName(QString::fromUtf8("frame_59"));
        frame_59->setGeometry(QRect(120, 270, 441, 41));
        frame_59->setFrameShape(QFrame::StyledPanel);
        frame_59->setFrameShadow(QFrame::Raised);
        NumKidsOutput = new QLabel(frame_59);
        NumKidsOutput->setObjectName(QString::fromUtf8("NumKidsOutput"));
        NumKidsOutput->setGeometry(QRect(320, 10, 81, 20));
        NumKidsOutput->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        NumKidsOutput->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_25 = new QLabel(frame_59);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(20, 10, 151, 20));
        label_25->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frame_60 = new QFrame(page_7);
        frame_60->setObjectName(QString::fromUtf8("frame_60"));
        frame_60->setGeometry(QRect(120, 360, 441, 101));
        frame_60->setFrameShape(QFrame::StyledPanel);
        frame_60->setFrameShadow(QFrame::Raised);
        label_26 = new QLabel(frame_60);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(10, 10, 191, 20));
        label_26->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        CreditOutput = new QLabel(frame_60);
        CreditOutput->setObjectName(QString::fromUtf8("CreditOutput"));
        CreditOutput->setGeometry(QRect(330, 10, 81, 20));
        CreditOutput->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_27 = new QLabel(frame_60);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(10, 50, 151, 31));
        label_27->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        TotalOutput = new QLabel(frame_60);
        TotalOutput->setObjectName(QString::fromUtf8("TotalOutput"));
        TotalOutput->setGeometry(QRect(330, 50, 91, 31));
        TotalOutput->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_43 = new QLabel(frame_60);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(310, 50, 16, 31));
        frame_61 = new QFrame(page_7);
        frame_61->setObjectName(QString::fromUtf8("frame_61"));
        frame_61->setGeometry(QRect(120, 150, 441, 41));
        frame_61->setFrameShape(QFrame::StyledPanel);
        frame_61->setFrameShadow(QFrame::Raised);
        label_22 = new QLabel(frame_61);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(20, 10, 151, 20));
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        NumNightsOutput = new QLabel(frame_61);
        NumNightsOutput->setObjectName(QString::fromUtf8("NumNightsOutput"));
        NumNightsOutput->setGeometry(QRect(320, 10, 81, 20));
        NumNightsOutput->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        NumNightsOutput->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_45 = new QLabel(page_7);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(240, 20, 191, 20));
        label_45->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(page_7);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        LiamLogo->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/Desktop/WhiteLogo.png\"/></p></body></html>", nullptr));
        WelcomeButton->setText(QCoreApplication::translate("MainWindow", "-Reserve Stay-", nullptr));
        ResHeader->setText(QCoreApplication::translate("MainWindow", "Name for Reservation?", nullptr));
        ResProceedButton->setText(QCoreApplication::translate("MainWindow", "Next Step", nullptr));
        ResInput->setPlaceholderText(QString());
        QueenButton->setText(QCoreApplication::translate("MainWindow", "2 - Queens", nullptr));
        KingButton->setText(QCoreApplication::translate("MainWindow", "King", nullptr));
        StayLabel->setText(QCoreApplication::translate("MainWindow", "What Kind of bed for your stay?", nullptr));
        StandardButton->setText(QCoreApplication::translate("MainWindow", "Standard Room", nullptr));
        AtriumButton->setText(QCoreApplication::translate("MainWindow", "Atrium Sweet", nullptr));
        QueenButton_2->setText(QCoreApplication::translate("MainWindow", "What Kind of room would you like?", nullptr));
        ProceedDatesBttn->setText(QCoreApplication::translate("MainWindow", "Next Step", nullptr));
        QueenButton_3->setText(QCoreApplication::translate("MainWindow", "Select start date and amount of nights", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number of Adults ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Number of Kids?", nullptr));
        ParkingCheckBox->setText(QCoreApplication::translate("MainWindow", "Add Parking for $12.75", nullptr));
        ProceedGuests->setText(QCoreApplication::translate("MainWindow", "Next Step", nullptr));
        QueenButton_4->setText(QCoreApplication::translate("MainWindow", "Please fill out the remainder of your stay details", nullptr));
        ProceedCharges->setText(QCoreApplication::translate("MainWindow", "Pay Now:  $", nullptr));
        TotalCost->setText(QCoreApplication::translate("MainWindow", "Total Cost", nullptr));
        TotalChargeBox->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "$", nullptr));
        Subtotal->setText(QCoreApplication::translate("MainWindow", "Tax", nullptr));
        SubtotalLabel->setText(QCoreApplication::translate("MainWindow", "Subtotal", nullptr));
        SubtotalAmount->setText(QCoreApplication::translate("MainWindow", "h", nullptr));
        TaxAmount->setText(QCoreApplication::translate("MainWindow", "h", nullptr));
        RoomTypeEdit_5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        RoomTypeLabel_5->setText(QCoreApplication::translate("MainWindow", "Room Type", nullptr));
        ParkingLabel->setText(QCoreApplication::translate("MainWindow", "Parking", nullptr));
        ParkingTypeEdit->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        RoomTypeEdit_6->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        RoomTypeLabel_6->setText(QCoreApplication::translate("MainWindow", "Room Type", nullptr));
        BedType_2->setText(QCoreApplication::translate("MainWindow", "Bed Type", nullptr));
        BedTypeEdit->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        RoomTypeEdit->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        RoomTypeLabel_2->setText(QCoreApplication::translate("MainWindow", "Room Type", nullptr));
        RoomTypeEdit_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        RoomTypeLabel_3->setText(QCoreApplication::translate("MainWindow", "Room Type", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Payment Info", nullptr));
        PayButtonCharge->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Nevermind, I need to Change Something.", nullptr));
        VisaRadio->setText(QCoreApplication::translate("MainWindow", "Visa", nullptr));
        MasterRadio->setText(QCoreApplication::translate("MainWindow", "Master", nullptr));
        AmericanRadio->setText(QCoreApplication::translate("MainWindow", "American", nullptr));
        DiscoRadio->setText(QCoreApplication::translate("MainWindow", "Discover", nullptr));
        PayNowButton->setText(QCoreApplication::translate("MainWindow", "Pay Now", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Payment Info", nullptr));
        ExpLabel->setText(QCoreApplication::translate("MainWindow", "Expiration Date", nullptr));
        ConfirmButton->setText(QCoreApplication::translate("MainWindow", "Thank you for choosing Liam Hotels", nullptr));
        ResOutput->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Room Type", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Date of first night", nullptr));
        FirstOutput->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Parking?", nullptr));
        ParkOutput->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Number of Adults", nullptr));
        NumAdultsOutput->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        NumKidsOutput->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Number of kids", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Last four of Credit Card", nullptr));
        CreditOutput->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Total bill", nullptr));
        TotalOutput->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "$", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Amount of nights", nullptr));
        NumNightsOutput->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "Payment Succes!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
