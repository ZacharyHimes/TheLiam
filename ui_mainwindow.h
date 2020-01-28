/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
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
    QWidget *page;
    QWidget *WelcomePage;
    QLabel *label;
    QPushButton *WelcomeButton;
    QLabel *label_2;
    QWidget *page_3;
    QLineEdit *ResInput_2;
    QLabel *label_10;
    QPushButton *pushButton;
    QWidget *BedSelection;
    QLabel *label_5;
    QPushButton *KingButton;
    QPushButton *QueenButton;
    QWidget *page_2;
    QLabel *RoomTypeLabel;
    QPushButton *AtriumButton;
    QPushButton *StandardButton;
    QWidget *ReserveDates;
    QLabel *label_3;
    QPushButton *ProceedDatesBttn;
    QCalendarWidget *CalendarWidget;
    QSpinBox *NumNightsBox;
    QLabel *label_6;
    QFrame *line;
    QWidget *NumberOfGuests;
    QLabel *Header;
    QSpinBox *NumAdultsBox;
    QLabel *AdultLabel;
    QSpinBox *NumKidsBox;
    QLabel *childrenLabel;
    QPushButton *ProceedGuests;
    QCheckBox *ParkingCheckBox;
    QWidget *TotalCharge;
    QLabel *TotalChargesHeader;
    QPushButton *ProceedCharges;
    QLabel *RoomTypeEdit;
    QLabel *BedTypeLabel;
    QLabel *BedTypeEdit;
    QLabel *ParkingTypeLabel;
    QLabel *RoomType;
    QLabel *ParkingTypeEdit;
    QWidget *PaymentInfo;
    QRadioButton *VisaRadio;
    QRadioButton *MasterRadio;
    QRadioButton *DiscoRadio;
    QRadioButton *AmericanRadio;
    QPushButton *PayNowButton;
    QLabel *label_8;
    QLineEdit *CreditInfo;
    QWidget *ReservatinDetails;
    QLabel *TitleLabel;
    QLabel *FirstLabel;
    QLabel *NumNightsLabel;
    QLabel *RoomLabel;
    QLabel *ParkingLabel;
    QLabel *NumAdultsLabel;
    QLabel *CreditLabel;
    QLabel *NumKidsLabel;
    QLabel *TotalLabel;
    QLabel *RezNameLabel;
    QLabel *ResOutput;
    QLabel *NumNightsOutput;
    QLabel *NumAdultOutput;
    QLabel *FirstOutput;
    QLabel *ParkOutput;
    QLabel *RoomOutput;
    QLabel *NumKidsOutput;
    QLabel *CreditOutput;
    QLabel *TotalOutput;
    QPushButton *ConfirmButton;
    QWidget *FinalThanks;
    QPushButton *EndAllButton;
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
        stackedWidget->setGeometry(QRect(30, 20, 731, 531));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(198, 218, 248, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(226, 236, 251, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(99, 109, 124, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(132, 145, 165, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        stackedWidget->setPalette(palette);
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 218, 248);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        WelcomePage = new QWidget();
        WelcomePage->setObjectName(QString::fromUtf8("WelcomePage"));
        label = new QLabel(WelcomePage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 170, 251, 41));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        WelcomeButton = new QPushButton(WelcomePage);
        WelcomeButton->setObjectName(QString::fromUtf8("WelcomeButton"));
        WelcomeButton->setGeometry(QRect(250, 280, 231, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush8(QColor(30, 39, 67, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush8);
        QBrush brush9(QColor(255, 255, 255, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        QBrush brush10(QColor(255, 255, 255, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        QBrush brush11(QColor(255, 255, 255, 128));
        brush11.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        WelcomeButton->setPalette(palette1);
        WelcomeButton->setCursor(QCursor(Qt::PointingHandCursor));
        WelcomeButton->setAutoFillBackground(false);
        WelcomeButton->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 39, 67);\n"
"color: rgb(255, 255, 255);"));
        WelcomeButton->setFlat(false);
        label_2 = new QLabel(WelcomePage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 80, 81, 81));
        stackedWidget->addWidget(WelcomePage);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        ResInput_2 = new QLineEdit(page_3);
        ResInput_2->setObjectName(QString::fromUtf8("ResInput_2"));
        ResInput_2->setGeometry(QRect(310, 210, 190, 30));
        label_10 = new QLabel(page_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(160, 210, 121, 30));
        pushButton = new QPushButton(page_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(340, 340, 75, 23));
        stackedWidget->addWidget(page_3);
        BedSelection = new QWidget();
        BedSelection->setObjectName(QString::fromUtf8("BedSelection"));
        label_5 = new QLabel(BedSelection);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(270, 50, 251, 51));
        QFont font1;
        font1.setPointSize(25);
        label_5->setFont(font1);
        KingButton = new QPushButton(BedSelection);
        KingButton->setObjectName(QString::fromUtf8("KingButton"));
        KingButton->setGeometry(QRect(280, 130, 100, 100));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        KingButton->setFont(font2);
        KingButton->setStyleSheet(QString::fromUtf8(" display:block;\n"
"  height: 300px;\n"
"  width: 300px;\n"
"  border-radius: 50%;\n"
"  border: 3px solid red;\n"
"\n"
" "));
        QueenButton = new QPushButton(BedSelection);
        QueenButton->setObjectName(QString::fromUtf8("QueenButton"));
        QueenButton->setGeometry(QRect(410, 130, 100, 100));
        QueenButton->setFont(font2);
        QueenButton->setStyleSheet(QString::fromUtf8(" display:block;\n"
"  height: 300px;\n"
"  width: 300px;\n"
"  border-radius: 50%;\n"
"  border: 3px solid red;"));
        stackedWidget->addWidget(BedSelection);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        RoomTypeLabel = new QLabel(page_2);
        RoomTypeLabel->setObjectName(QString::fromUtf8("RoomTypeLabel"));
        RoomTypeLabel->setGeometry(QRect(310, 70, 121, 31));
        RoomTypeLabel->setFont(font1);
        AtriumButton = new QPushButton(page_2);
        AtriumButton->setObjectName(QString::fromUtf8("AtriumButton"));
        AtriumButton->setGeometry(QRect(380, 120, 100, 100));
        AtriumButton->setFont(font2);
        AtriumButton->setStyleSheet(QString::fromUtf8(" display:block;\n"
"  height: 300px;\n"
"  width: 300px;\n"
"  border-radius: 50%;\n"
"  border: 3px solid red;\n"
""));
        StandardButton = new QPushButton(page_2);
        StandardButton->setObjectName(QString::fromUtf8("StandardButton"));
        StandardButton->setGeometry(QRect(250, 120, 100, 100));
        StandardButton->setFont(font2);
        StandardButton->setCursor(QCursor(Qt::PointingHandCursor));
        StandardButton->setStyleSheet(QString::fromUtf8(" display:block;\n"
"  height: 300px;\n"
"  width: 300px;\n"
"  border-radius: 50%;\n"
"  border: 3px solid red;\n"
"a.QpushButton a:hover\n"
"{\n"
"	background-color: rgb(30, 39, 67);\n"
"}"));
        stackedWidget->addWidget(page_2);
        ReserveDates = new QWidget();
        ReserveDates->setObjectName(QString::fromUtf8("ReserveDates"));
        QFont font3;
        font3.setPointSize(14);
        ReserveDates->setFont(font3);
        label_3 = new QLabel(ReserveDates);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(310, 40, 201, 51));
        QFont font4;
        font4.setPointSize(23);
        label_3->setFont(font4);
        ProceedDatesBttn = new QPushButton(ReserveDates);
        ProceedDatesBttn->setObjectName(QString::fromUtf8("ProceedDatesBttn"));
        ProceedDatesBttn->setGeometry(QRect(290, 350, 131, 41));
        CalendarWidget = new QCalendarWidget(ReserveDates);
        CalendarWidget->setObjectName(QString::fromUtf8("CalendarWidget"));
        CalendarWidget->setGeometry(QRect(150, 150, 304, 173));
        CalendarWidget->setMinimumDate(QDate(2020, 1, 23));
        NumNightsBox = new QSpinBox(ReserveDates);
        NumNightsBox->setObjectName(QString::fromUtf8("NumNightsBox"));
        NumNightsBox->setGeometry(QRect(500, 200, 81, 121));
        QFont font5;
        font5.setPointSize(40);
        NumNightsBox->setFont(font5);
        NumNightsBox->setAlignment(Qt::AlignCenter);
        NumNightsBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        NumNightsBox->setMaximum(7);
        label_6 = new QLabel(ReserveDates);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(500, 140, 81, 51));
        label_6->setWordWrap(true);
        line = new QFrame(ReserveDates);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(460, 150, 20, 171));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush12(QColor(0, 0, 0, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush13(QColor(0, 0, 0, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush14(QColor(0, 0, 0, 128));
        brush14.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        line->setPalette(palette2);
        line->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(ReserveDates);
        NumberOfGuests = new QWidget();
        NumberOfGuests->setObjectName(QString::fromUtf8("NumberOfGuests"));
        Header = new QLabel(NumberOfGuests);
        Header->setObjectName(QString::fromUtf8("Header"));
        Header->setGeometry(QRect(270, 60, 171, 31));
        QFont font6;
        font6.setPointSize(20);
        Header->setFont(font6);
        NumAdultsBox = new QSpinBox(NumberOfGuests);
        NumAdultsBox->setObjectName(QString::fromUtf8("NumAdultsBox"));
        NumAdultsBox->setGeometry(QRect(230, 140, 41, 31));
        NumAdultsBox->setMinimum(1);
        NumAdultsBox->setMaximum(4);
        AdultLabel = new QLabel(NumberOfGuests);
        AdultLabel->setObjectName(QString::fromUtf8("AdultLabel"));
        AdultLabel->setGeometry(QRect(180, 110, 151, 21));
        NumKidsBox = new QSpinBox(NumberOfGuests);
        NumKidsBox->setObjectName(QString::fromUtf8("NumKidsBox"));
        NumKidsBox->setGeometry(QRect(420, 140, 41, 31));
        childrenLabel = new QLabel(NumberOfGuests);
        childrenLabel->setObjectName(QString::fromUtf8("childrenLabel"));
        childrenLabel->setGeometry(QRect(370, 110, 151, 21));
        ProceedGuests = new QPushButton(NumberOfGuests);
        ProceedGuests->setObjectName(QString::fromUtf8("ProceedGuests"));
        ProceedGuests->setGeometry(QRect(280, 290, 131, 41));
        ParkingCheckBox = new QCheckBox(NumberOfGuests);
        ParkingCheckBox->setObjectName(QString::fromUtf8("ParkingCheckBox"));
        ParkingCheckBox->setGeometry(QRect(270, 230, 86, 20));
        stackedWidget->addWidget(NumberOfGuests);
        TotalCharge = new QWidget();
        TotalCharge->setObjectName(QString::fromUtf8("TotalCharge"));
        TotalChargesHeader = new QLabel(TotalCharge);
        TotalChargesHeader->setObjectName(QString::fromUtf8("TotalChargesHeader"));
        TotalChargesHeader->setGeometry(QRect(290, 50, 151, 61));
        TotalChargesHeader->setFont(font4);
        ProceedCharges = new QPushButton(TotalCharge);
        ProceedCharges->setObjectName(QString::fromUtf8("ProceedCharges"));
        ProceedCharges->setGeometry(QRect(330, 260, 75, 23));
        RoomTypeEdit = new QLabel(TotalCharge);
        RoomTypeEdit->setObjectName(QString::fromUtf8("RoomTypeEdit"));
        RoomTypeEdit->setGeometry(QRect(420, 120, 59, 16));
        BedTypeLabel = new QLabel(TotalCharge);
        BedTypeLabel->setObjectName(QString::fromUtf8("BedTypeLabel"));
        BedTypeLabel->setGeometry(QRect(250, 150, 71, 16));
        BedTypeEdit = new QLabel(TotalCharge);
        BedTypeEdit->setObjectName(QString::fromUtf8("BedTypeEdit"));
        BedTypeEdit->setGeometry(QRect(420, 150, 59, 16));
        ParkingTypeLabel = new QLabel(TotalCharge);
        ParkingTypeLabel->setObjectName(QString::fromUtf8("ParkingTypeLabel"));
        ParkingTypeLabel->setGeometry(QRect(250, 180, 59, 16));
        RoomType = new QLabel(TotalCharge);
        RoomType->setObjectName(QString::fromUtf8("RoomType"));
        RoomType->setGeometry(QRect(250, 120, 81, 16));
        ParkingTypeEdit = new QLabel(TotalCharge);
        ParkingTypeEdit->setObjectName(QString::fromUtf8("ParkingTypeEdit"));
        ParkingTypeEdit->setGeometry(QRect(420, 180, 59, 16));
        stackedWidget->addWidget(TotalCharge);
        PaymentInfo = new QWidget();
        PaymentInfo->setObjectName(QString::fromUtf8("PaymentInfo"));
        VisaRadio = new QRadioButton(PaymentInfo);
        VisaRadio->setObjectName(QString::fromUtf8("VisaRadio"));
        VisaRadio->setGeometry(QRect(170, 110, 100, 20));
        MasterRadio = new QRadioButton(PaymentInfo);
        MasterRadio->setObjectName(QString::fromUtf8("MasterRadio"));
        MasterRadio->setGeometry(QRect(170, 130, 100, 20));
        DiscoRadio = new QRadioButton(PaymentInfo);
        DiscoRadio->setObjectName(QString::fromUtf8("DiscoRadio"));
        DiscoRadio->setGeometry(QRect(170, 150, 100, 20));
        AmericanRadio = new QRadioButton(PaymentInfo);
        AmericanRadio->setObjectName(QString::fromUtf8("AmericanRadio"));
        AmericanRadio->setGeometry(QRect(170, 170, 131, 20));
        PayNowButton = new QPushButton(PaymentInfo);
        PayNowButton->setObjectName(QString::fromUtf8("PayNowButton"));
        PayNowButton->setGeometry(QRect(310, 350, 113, 41));
        label_8 = new QLabel(PaymentInfo);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(330, 50, 131, 41));
        QFont font7;
        font7.setPointSize(18);
        label_8->setFont(font7);
        CreditInfo = new QLineEdit(PaymentInfo);
        CreditInfo->setObjectName(QString::fromUtf8("CreditInfo"));
        CreditInfo->setGeometry(QRect(300, 240, 161, 31));
        stackedWidget->addWidget(PaymentInfo);
        ReservatinDetails = new QWidget();
        ReservatinDetails->setObjectName(QString::fromUtf8("ReservatinDetails"));
        TitleLabel = new QLabel(ReservatinDetails);
        TitleLabel->setObjectName(QString::fromUtf8("TitleLabel"));
        TitleLabel->setGeometry(QRect(270, 30, 190, 40));
        TitleLabel->setFont(font6);
        FirstLabel = new QLabel(ReservatinDetails);
        FirstLabel->setObjectName(QString::fromUtf8("FirstLabel"));
        FirstLabel->setGeometry(QRect(90, 120, 99, 30));
        NumNightsLabel = new QLabel(ReservatinDetails);
        NumNightsLabel->setObjectName(QString::fromUtf8("NumNightsLabel"));
        NumNightsLabel->setGeometry(QRect(90, 150, 100, 30));
        RoomLabel = new QLabel(ReservatinDetails);
        RoomLabel->setObjectName(QString::fromUtf8("RoomLabel"));
        RoomLabel->setGeometry(QRect(90, 210, 101, 30));
        ParkingLabel = new QLabel(ReservatinDetails);
        ParkingLabel->setObjectName(QString::fromUtf8("ParkingLabel"));
        ParkingLabel->setGeometry(QRect(90, 180, 100, 30));
        NumAdultsLabel = new QLabel(ReservatinDetails);
        NumAdultsLabel->setObjectName(QString::fromUtf8("NumAdultsLabel"));
        NumAdultsLabel->setGeometry(QRect(90, 240, 101, 30));
        CreditLabel = new QLabel(ReservatinDetails);
        CreditLabel->setObjectName(QString::fromUtf8("CreditLabel"));
        CreditLabel->setGeometry(QRect(90, 310, 80, 30));
        NumKidsLabel = new QLabel(ReservatinDetails);
        NumKidsLabel->setObjectName(QString::fromUtf8("NumKidsLabel"));
        NumKidsLabel->setGeometry(QRect(90, 270, 101, 30));
        TotalLabel = new QLabel(ReservatinDetails);
        TotalLabel->setObjectName(QString::fromUtf8("TotalLabel"));
        TotalLabel->setGeometry(QRect(90, 340, 90, 30));
        RezNameLabel = new QLabel(ReservatinDetails);
        RezNameLabel->setObjectName(QString::fromUtf8("RezNameLabel"));
        RezNameLabel->setGeometry(QRect(90, 90, 101, 30));
        ResOutput = new QLabel(ReservatinDetails);
        ResOutput->setObjectName(QString::fromUtf8("ResOutput"));
        ResOutput->setGeometry(QRect(230, 90, 350, 30));
        NumNightsOutput = new QLabel(ReservatinDetails);
        NumNightsOutput->setObjectName(QString::fromUtf8("NumNightsOutput"));
        NumNightsOutput->setGeometry(QRect(230, 150, 350, 30));
        NumAdultOutput = new QLabel(ReservatinDetails);
        NumAdultOutput->setObjectName(QString::fromUtf8("NumAdultOutput"));
        NumAdultOutput->setGeometry(QRect(230, 240, 350, 30));
        FirstOutput = new QLabel(ReservatinDetails);
        FirstOutput->setObjectName(QString::fromUtf8("FirstOutput"));
        FirstOutput->setGeometry(QRect(230, 120, 350, 30));
        ParkOutput = new QLabel(ReservatinDetails);
        ParkOutput->setObjectName(QString::fromUtf8("ParkOutput"));
        ParkOutput->setGeometry(QRect(230, 180, 350, 30));
        RoomOutput = new QLabel(ReservatinDetails);
        RoomOutput->setObjectName(QString::fromUtf8("RoomOutput"));
        RoomOutput->setGeometry(QRect(230, 210, 350, 30));
        NumKidsOutput = new QLabel(ReservatinDetails);
        NumKidsOutput->setObjectName(QString::fromUtf8("NumKidsOutput"));
        NumKidsOutput->setGeometry(QRect(230, 270, 350, 30));
        CreditOutput = new QLabel(ReservatinDetails);
        CreditOutput->setObjectName(QString::fromUtf8("CreditOutput"));
        CreditOutput->setGeometry(QRect(230, 310, 350, 30));
        TotalOutput = new QLabel(ReservatinDetails);
        TotalOutput->setObjectName(QString::fromUtf8("TotalOutput"));
        TotalOutput->setGeometry(QRect(230, 340, 350, 30));
        ConfirmButton = new QPushButton(ReservatinDetails);
        ConfirmButton->setObjectName(QString::fromUtf8("ConfirmButton"));
        ConfirmButton->setGeometry(QRect(300, 400, 113, 32));
        stackedWidget->addWidget(ReservatinDetails);
        FinalThanks = new QWidget();
        FinalThanks->setObjectName(QString::fromUtf8("FinalThanks"));
        EndAllButton = new QPushButton(FinalThanks);
        EndAllButton->setObjectName(QString::fromUtf8("EndAllButton"));
        EndAllButton->setGeometry(QRect(160, 270, 131, 32));
        stackedWidget->addWidget(FinalThanks);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(8);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Welcome to KLZ Hotels!", nullptr));
        WelcomeButton->setText(QApplication::translate("MainWindow", "Reserve a Room", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "      Logo", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Reservation name:", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Bed & Room Selection", nullptr));
        KingButton->setText(QApplication::translate("MainWindow", "King ", nullptr));
        QueenButton->setText(QApplication::translate("MainWindow", "2 Queens", nullptr));
        RoomTypeLabel->setText(QApplication::translate("MainWindow", "Room Type", nullptr));
        AtriumButton->setText(QApplication::translate("MainWindow", "Atrium", nullptr));
        StandardButton->setText(QApplication::translate("MainWindow", "Standard", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Reserve Dates", nullptr));
        ProceedDatesBttn->setText(QApplication::translate("MainWindow", "Proceed ", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "How many nights will you stay?", nullptr));
        Header->setText(QApplication::translate("MainWindow", "How Many Guests", nullptr));
        AdultLabel->setText(QApplication::translate("MainWindow", "How Many Adults(18+)", nullptr));
        childrenLabel->setText(QApplication::translate("MainWindow", "How Many Children?", nullptr));
        ProceedGuests->setText(QApplication::translate("MainWindow", "Proceed ", nullptr));
        ParkingCheckBox->setText(QApplication::translate("MainWindow", "Parking?", nullptr));
        TotalChargesHeader->setText(QApplication::translate("MainWindow", "Total Charges", nullptr));
        ProceedCharges->setText(QApplication::translate("MainWindow", "Proceed", nullptr));
        RoomTypeEdit->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        BedTypeLabel->setText(QApplication::translate("MainWindow", "Bed Type", nullptr));
        BedTypeEdit->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        ParkingTypeLabel->setText(QApplication::translate("MainWindow", "Parking", nullptr));
        RoomType->setText(QApplication::translate("MainWindow", "Room Type", nullptr));
        ParkingTypeEdit->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        VisaRadio->setText(QApplication::translate("MainWindow", "Visa", nullptr));
        MasterRadio->setText(QApplication::translate("MainWindow", "MasterCard", nullptr));
        DiscoRadio->setText(QApplication::translate("MainWindow", "Discover", nullptr));
        AmericanRadio->setText(QApplication::translate("MainWindow", "American Express", nullptr));
        PayNowButton->setText(QApplication::translate("MainWindow", "Pay Now", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Check  Out", nullptr));
        CreditInfo->setInputMask(QString());
        TitleLabel->setText(QApplication::translate("MainWindow", "Confirmation ", nullptr));
        FirstLabel->setText(QApplication::translate("MainWindow", "First Day:", nullptr));
        NumNightsLabel->setText(QApplication::translate("MainWindow", "How many nights:", nullptr));
        RoomLabel->setText(QApplication::translate("MainWindow", "Room type:", nullptr));
        ParkingLabel->setText(QApplication::translate("MainWindow", "Parking:", nullptr));
        NumAdultsLabel->setText(QApplication::translate("MainWindow", "Number of adults:", nullptr));
        CreditLabel->setText(QApplication::translate("MainWindow", "Paid with:", nullptr));
        NumKidsLabel->setText(QApplication::translate("MainWindow", "Number of kids", nullptr));
        TotalLabel->setText(QApplication::translate("MainWindow", "Total:", nullptr));
        RezNameLabel->setText(QApplication::translate("MainWindow", "Reservation name:", nullptr));
        ResOutput->setText(QApplication::translate("MainWindow", "e", nullptr));
        NumNightsOutput->setText(QApplication::translate("MainWindow", "w", nullptr));
        NumAdultOutput->setText(QApplication::translate("MainWindow", "r", nullptr));
        FirstOutput->setText(QApplication::translate("MainWindow", "c", nullptr));
        ParkOutput->setText(QApplication::translate("MainWindow", "d", nullptr));
        RoomOutput->setText(QApplication::translate("MainWindow", "a", nullptr));
        NumKidsOutput->setText(QApplication::translate("MainWindow", "r", nullptr));
        CreditOutput->setText(QApplication::translate("MainWindow", "r", nullptr));
        TotalOutput->setText(QApplication::translate("MainWindow", "r", nullptr));
        ConfirmButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        EndAllButton->setText(QApplication::translate("MainWindow", "Reserve a Room", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
