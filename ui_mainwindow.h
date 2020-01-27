/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
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
    QPushButton *WelcomeButton;
    QLabel *LogoLabel;
    QFrame *Line;
    QWidget *BedSelection;
    QPushButton *KingButton;
    QPushButton *QueenButton;
    QFrame *HeaderFrame;
    QLabel *HeaderText;
    QWidget *page_2;
    QPushButton *AtriumButton;
    QPushButton *StandardButton;
    QFrame *frame_4;
    QLabel *Header_7;
    QWidget *ReserveDates;
    QPushButton *ProceedReservBttn;
    QCalendarWidget *calendarWidget;
    QSpinBox *NumNights;
    QLabel *label_6;
    QFrame *line;
    QFrame *frame_2;
    QLabel *Header_2;
    QWidget *NumberOfGuests;
    QLabel *AdultLabel;
    QLabel *childrenLabel;
    QFrame *frame;
    QLabel *Header;
    QFrame *line_3;
    QCheckBox *ParkingCheckBox;
    QSpinBox *NumAdultsSpnBx;
    QSpinBox *NumChildrenSpnBx;
    QPushButton *ProceedBttn;
    QWidget *TotalCharge;
    QLabel *label_7;
    QFrame *frame_3;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *RoomChargeAmnt;
    QLabel *ParkingFeeAmnt;
    QLabel *ResortFeeAmnt;
    QLabel *label;
    QLabel *label_13;
    QLabel *label_14;
    QFrame *frame_8;
    QLabel *Total_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *SubtotalAmntReview;
    QLabel *TaxAmntReview;
    QLabel *TotalAmntReview;
    QWidget *PaymentInfo;
    QRadioButton *VisaButton;
    QRadioButton *MasterCardButton;
    QRadioButton *DiscoverButton;
    QRadioButton *AmericanExpressButton;
    QPushButton *PayNowButton;
    QLabel *label_8;
    QLineEdit *CardEntryLine;
    QWidget *ReservatinDetails;
    QLabel *NumNightsLabel;
    QLabel *ParkingLabel;
    QLabel *StartDate;
    QLabel *RoomTypeLabel;
    QLabel *NumAdultsLabel;
    QLabel *TotalAmountLabel;
    QLabel *label_21;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QFrame *DetailFrame;
    QLabel *Total;
    QLabel *Tax;
    QLabel *Subtotal_2;
    QLabel *SubtotalAmnt;
    QLabel *TaxAmnt;
    QLabel *TotalAmnt;
    QWidget *FinalThanks;
    QLabel *THankYouPag;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 0));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 9, 760, 521));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(230, 230, 230, 255));
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
        QBrush brush8(QColor(198, 218, 248, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        stackedWidget->setPalette(palette);
        stackedWidget->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(230, 230, 230);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        WelcomePage = new QWidget();
        WelcomePage->setObjectName(QString::fromUtf8("WelcomePage"));
        WelcomeButton = new QPushButton(WelcomePage);
        WelcomeButton->setObjectName(QString::fromUtf8("WelcomeButton"));
        WelcomeButton->setGeometry(QRect(300, 230, 150, 150));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush9(QColor(255, 255, 255, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        QBrush brush10(QColor(255, 255, 255, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        QBrush brush11(QColor(255, 255, 255, 128));
        brush11.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        WelcomeButton->setPalette(palette1);
        QFont font;
        font.setPointSize(19);
        WelcomeButton->setFont(font);
        WelcomeButton->setCursor(QCursor(Qt::PointingHandCursor));
        WelcomeButton->setAutoFillBackground(false);
        WelcomeButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"		height: 300px;\n"
"  		width: 300px;\n"
"  		border-radius:75%;\n"
"		background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	\n"
"	border-color: rgb(30, 39, 67);\n"
"	\n"
"	\n"
"	background-color: rgb(25, 25, 25);\n"
"	color:rgb(204, 204, 204)\n"
"}\n"
"\n"
""));
        WelcomeButton->setFlat(false);
        LogoLabel = new QLabel(WelcomePage);
        LogoLabel->setObjectName(QString::fromUtf8("LogoLabel"));
        LogoLabel->setGeometry(QRect(200, 60, 361, 121));
        Line = new QFrame(WelcomePage);
        Line->setObjectName(QString::fromUtf8("Line"));
        Line->setGeometry(QRect(180, 180, 381, 20));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Line->setPalette(palette2);
        Line->setFrameShape(QFrame::HLine);
        Line->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(WelcomePage);
        BedSelection = new QWidget();
        BedSelection->setObjectName(QString::fromUtf8("BedSelection"));
        KingButton = new QPushButton(BedSelection);
        KingButton->setObjectName(QString::fromUtf8("KingButton"));
        KingButton->setGeometry(QRect(230, 220, 100, 100));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        KingButton->setFont(font1);
        KingButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"		height: 300px;\n"
"  		width: 300px;\n"
"  		border-radius:50%;\n"
"		border-color: rgb(30, 39, 67);\n"
"		color: rgb(255, 255, 255);\n"
"		background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	\n"
"	border-color: rgb(30, 39, 67);\n"
"	\n"
"	\n"
"	background-color: rgb(25, 25, 25);\n"
"	color:rgb(204, 204, 204)\n"
"}"));
        QueenButton = new QPushButton(BedSelection);
        QueenButton->setObjectName(QString::fromUtf8("QueenButton"));
        QueenButton->setGeometry(QRect(400, 220, 200, 200));
        QueenButton->setFont(font1);
        QueenButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"		height: 300px;\n"
"  		width: 300px;\n"
"  		border-radius:50%;\n"
"		border-color: rgb(30, 39, 67);\n"
"		color: rgb(255, 255, 255);\n"
"		background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	\n"
"	border-color: rgb(30, 39, 67);\n"
"	\n"
"	\n"
"	background-color: rgb(25, 25, 25);\n"
"	color:rgb(204, 204, 204)\n"
"}"));
        HeaderFrame = new QFrame(BedSelection);
        HeaderFrame->setObjectName(QString::fromUtf8("HeaderFrame"));
        HeaderFrame->setGeometry(QRect(250, 80, 231, 51));
        HeaderFrame->setFrameShape(QFrame::StyledPanel);
        HeaderFrame->setFrameShadow(QFrame::Raised);
        HeaderText = new QLabel(HeaderFrame);
        HeaderText->setObjectName(QString::fromUtf8("HeaderText"));
        HeaderText->setGeometry(QRect(20, 10, 191, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Baskerville"));
        font2.setPointSize(20);
        HeaderText->setFont(font2);
        stackedWidget->addWidget(BedSelection);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        AtriumButton = new QPushButton(page_2);
        AtriumButton->setObjectName(QString::fromUtf8("AtriumButton"));
        AtriumButton->setGeometry(QRect(380, 200, 100, 100));
        AtriumButton->setFont(font1);
        AtriumButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"		height: 300px;\n"
"  		width: 300px;\n"
"  		border-radius:50%;\n"
"		border-color: rgb(30, 39, 67);\n"
"		color: rgb(255, 255, 255);\n"
"		background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	\n"
"	border-color: rgb(30, 39, 67);\n"
"	\n"
"	\n"
"	background-color: rgb(25, 25, 25);\n"
"	color:rgb(204, 204, 204)\n"
"}"));
        StandardButton = new QPushButton(page_2);
        StandardButton->setObjectName(QString::fromUtf8("StandardButton"));
        StandardButton->setGeometry(QRect(250, 200, 100, 100));
        StandardButton->setFont(font1);
        StandardButton->setCursor(QCursor(Qt::PointingHandCursor));
        StandardButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"		height: 300px;\n"
"  		width: 300px;\n"
"  		border-radius:50%;\n"
"		border-color: rgb(30, 39, 67);\n"
"		color: rgb(255, 255, 255);\n"
"		background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	\n"
"	border-color: rgb(30, 39, 67);\n"
"	\n"
"	\n"
"	background-color: rgb(25, 25, 25);\n"
"	color:rgb(204, 204, 204)\n"
"}"));
        frame_4 = new QFrame(page_2);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(250, 70, 231, 51));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        Header_7 = new QLabel(frame_4);
        Header_7->setObjectName(QString::fromUtf8("Header_7"));
        Header_7->setGeometry(QRect(20, 10, 191, 31));
        Header_7->setFont(font2);
        stackedWidget->addWidget(page_2);
        ReserveDates = new QWidget();
        ReserveDates->setObjectName(QString::fromUtf8("ReserveDates"));
        QFont font3;
        font3.setPointSize(14);
        ReserveDates->setFont(font3);
        ProceedReservBttn = new QPushButton(ReserveDates);
        ProceedReservBttn->setObjectName(QString::fromUtf8("ProceedReservBttn"));
        ProceedReservBttn->setGeometry(QRect(310, 330, 131, 41));
        ProceedReservBttn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"		height: 300px;\n"
"  		width: 300px;\n"
"  		border-radius:40%;\n"
"		border-color: rgb(30, 39, 67);\n"
"		color: rgb(255, 255, 255);\n"
"		background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	\n"
"	border-color: rgb(30, 39, 67);\n"
"	\n"
"	\n"
"	background-color: rgb(25, 25, 25);\n"
"	color:rgb(204, 204, 204)\n"
"}"));
        calendarWidget = new QCalendarWidget(ReserveDates);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(160, 120, 304, 173));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        calendarWidget->setPalette(palette3);
        calendarWidget->setMinimumDate(QDate(2020, 1, 23));
        calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::ShortDayNames);
        NumNights = new QSpinBox(ReserveDates);
        NumNights->setObjectName(QString::fromUtf8("NumNights"));
        NumNights->setGeometry(QRect(540, 180, 81, 111));
        QFont font4;
        font4.setPointSize(40);
        NumNights->setFont(font4);
        NumNights->setAlignment(Qt::AlignCenter);
        NumNights->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        NumNights->setMaximum(7);
        label_6 = new QLabel(ReserveDates);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(540, 120, 81, 51));
        label_6->setWordWrap(true);
        line = new QFrame(ReserveDates);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(490, 120, 20, 171));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush12(QColor(0, 0, 0, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush13(QColor(0, 0, 0, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush14(QColor(0, 0, 0, 128));
        brush14.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        line->setPalette(palette4);
        line->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        frame_2 = new QFrame(ReserveDates);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(270, 20, 211, 51));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        Header_2 = new QLabel(frame_2);
        Header_2->setObjectName(QString::fromUtf8("Header_2"));
        Header_2->setGeometry(QRect(30, 10, 161, 31));
        Header_2->setFont(font2);
        stackedWidget->addWidget(ReserveDates);
        NumberOfGuests = new QWidget();
        NumberOfGuests->setObjectName(QString::fromUtf8("NumberOfGuests"));
        AdultLabel = new QLabel(NumberOfGuests);
        AdultLabel->setObjectName(QString::fromUtf8("AdultLabel"));
        AdultLabel->setGeometry(QRect(160, 130, 181, 21));
        QFont font5;
        font5.setPointSize(16);
        AdultLabel->setFont(font5);
        childrenLabel = new QLabel(NumberOfGuests);
        childrenLabel->setObjectName(QString::fromUtf8("childrenLabel"));
        childrenLabel->setGeometry(QRect(410, 130, 151, 21));
        childrenLabel->setFont(font5);
        frame = new QFrame(NumberOfGuests);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(280, 30, 201, 51));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Header = new QLabel(frame);
        Header->setObjectName(QString::fromUtf8("Header"));
        Header->setGeometry(QRect(20, 10, 161, 31));
        Header->setFont(font2);
        line_3 = new QFrame(NumberOfGuests);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(360, 120, 20, 141));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        ParkingCheckBox = new QCheckBox(NumberOfGuests);
        ParkingCheckBox->setObjectName(QString::fromUtf8("ParkingCheckBox"));
        ParkingCheckBox->setGeometry(QRect(310, 280, 131, 20));
        NumAdultsSpnBx = new QSpinBox(NumberOfGuests);
        NumAdultsSpnBx->setObjectName(QString::fromUtf8("NumAdultsSpnBx"));
        NumAdultsSpnBx->setGeometry(QRect(220, 170, 51, 71));
        NumChildrenSpnBx = new QSpinBox(NumberOfGuests);
        NumChildrenSpnBx->setObjectName(QString::fromUtf8("NumChildrenSpnBx"));
        NumChildrenSpnBx->setGeometry(QRect(460, 170, 51, 71));
        ProceedBttn = new QPushButton(NumberOfGuests);
        ProceedBttn->setObjectName(QString::fromUtf8("ProceedBttn"));
        ProceedBttn->setGeometry(QRect(310, 350, 121, 51));
        ProceedBttn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"		height: 300px;\n"
"  		width: 300px;\n"
"  		border-radius:40%;\n"
"		border-color: rgb(30, 39, 67);\n"
"		color: rgb(255, 255, 255);\n"
"		background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	\n"
"	border-color: rgb(30, 39, 67);\n"
"	\n"
"	\n"
"	background-color: rgb(25, 25, 25);\n"
"	color:rgb(204, 204, 204)\n"
"}"));
        stackedWidget->addWidget(NumberOfGuests);
        TotalCharge = new QWidget();
        TotalCharge->setObjectName(QString::fromUtf8("TotalCharge"));
        label_7 = new QLabel(TotalCharge);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(350, 20, 151, 61));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Baskerville"));
        font6.setPointSize(23);
        label_7->setFont(font6);
        frame_3 = new QFrame(TotalCharge);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(220, 70, 391, 161));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 40, 16, 16));
        label_9 = new QLabel(frame_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 90, 16, 16));
        RoomChargeAmnt = new QLabel(frame_3);
        RoomChargeAmnt->setObjectName(QString::fromUtf8("RoomChargeAmnt"));
        RoomChargeAmnt->setGeometry(QRect(298, 20, 51, 20));
        ParkingFeeAmnt = new QLabel(frame_3);
        ParkingFeeAmnt->setObjectName(QString::fromUtf8("ParkingFeeAmnt"));
        ParkingFeeAmnt->setGeometry(QRect(300, 70, 41, 20));
        ResortFeeAmnt = new QLabel(frame_3);
        ResortFeeAmnt->setObjectName(QString::fromUtf8("ResortFeeAmnt"));
        ResortFeeAmnt->setGeometry(QRect(300, 120, 41, 20));
        label = new QLabel(frame_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 20, 111, 16));
        label->setFont(font5);
        label_13 = new QLabel(frame_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(60, 70, 91, 16));
        label_13->setFont(font5);
        label_14 = new QLabel(frame_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(60, 120, 91, 16));
        label_14->setFont(font5);
        frame_8 = new QFrame(TotalCharge);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(220, 240, 391, 111));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        Total_2 = new QLabel(frame_8);
        Total_2->setObjectName(QString::fromUtf8("Total_2"));
        Total_2->setGeometry(QRect(50, 80, 59, 16));
        QFont font7;
        font7.setPointSize(16);
        font7.setBold(true);
        font7.setWeight(75);
        Total_2->setFont(font7);
        label_11 = new QLabel(frame_8);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(50, 50, 59, 16));
        label_12 = new QLabel(frame_8);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(50, 20, 59, 16));
        QFont font8;
        font8.setBold(false);
        font8.setWeight(50);
        label_12->setFont(font8);
        SubtotalAmntReview = new QLabel(frame_8);
        SubtotalAmntReview->setObjectName(QString::fromUtf8("SubtotalAmntReview"));
        SubtotalAmntReview->setGeometry(QRect(280, 20, 59, 16));
        TaxAmntReview = new QLabel(frame_8);
        TaxAmntReview->setObjectName(QString::fromUtf8("TaxAmntReview"));
        TaxAmntReview->setGeometry(QRect(280, 50, 59, 16));
        TotalAmntReview = new QLabel(frame_8);
        TotalAmntReview->setObjectName(QString::fromUtf8("TotalAmntReview"));
        TotalAmntReview->setGeometry(QRect(280, 80, 59, 16));
        stackedWidget->addWidget(TotalCharge);
        PaymentInfo = new QWidget();
        PaymentInfo->setObjectName(QString::fromUtf8("PaymentInfo"));
        VisaButton = new QRadioButton(PaymentInfo);
        VisaButton->setObjectName(QString::fromUtf8("VisaButton"));
        VisaButton->setGeometry(QRect(170, 110, 100, 20));
        MasterCardButton = new QRadioButton(PaymentInfo);
        MasterCardButton->setObjectName(QString::fromUtf8("MasterCardButton"));
        MasterCardButton->setGeometry(QRect(170, 130, 100, 20));
        DiscoverButton = new QRadioButton(PaymentInfo);
        DiscoverButton->setObjectName(QString::fromUtf8("DiscoverButton"));
        DiscoverButton->setGeometry(QRect(170, 150, 100, 20));
        AmericanExpressButton = new QRadioButton(PaymentInfo);
        AmericanExpressButton->setObjectName(QString::fromUtf8("AmericanExpressButton"));
        AmericanExpressButton->setGeometry(QRect(170, 170, 131, 20));
        PayNowButton = new QPushButton(PaymentInfo);
        PayNowButton->setObjectName(QString::fromUtf8("PayNowButton"));
        PayNowButton->setGeometry(QRect(330, 240, 113, 41));
        label_8 = new QLabel(PaymentInfo);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(330, 50, 91, 41));
        QFont font9;
        font9.setPointSize(18);
        label_8->setFont(font9);
        CardEntryLine = new QLineEdit(PaymentInfo);
        CardEntryLine->setObjectName(QString::fromUtf8("CardEntryLine"));
        CardEntryLine->setEnabled(true);
        CardEntryLine->setGeometry(QRect(310, 210, 113, 21));
        QFont font10;
        font10.setPointSize(13);
        CardEntryLine->setFont(font10);
        CardEntryLine->setAutoFillBackground(false);
        CardEntryLine->setFrame(false);
        stackedWidget->addWidget(PaymentInfo);
        ReservatinDetails = new QWidget();
        ReservatinDetails->setObjectName(QString::fromUtf8("ReservatinDetails"));
        NumNightsLabel = new QLabel(ReservatinDetails);
        NumNightsLabel->setObjectName(QString::fromUtf8("NumNightsLabel"));
        NumNightsLabel->setGeometry(QRect(150, 120, 59, 16));
        ParkingLabel = new QLabel(ReservatinDetails);
        ParkingLabel->setObjectName(QString::fromUtf8("ParkingLabel"));
        ParkingLabel->setGeometry(QRect(150, 200, 59, 16));
        StartDate = new QLabel(ReservatinDetails);
        StartDate->setObjectName(QString::fromUtf8("StartDate"));
        StartDate->setGeometry(QRect(240, 80, 71, 16));
        RoomTypeLabel = new QLabel(ReservatinDetails);
        RoomTypeLabel->setObjectName(QString::fromUtf8("RoomTypeLabel"));
        RoomTypeLabel->setGeometry(QRect(150, 160, 81, 16));
        NumAdultsLabel = new QLabel(ReservatinDetails);
        NumAdultsLabel->setObjectName(QString::fromUtf8("NumAdultsLabel"));
        NumAdultsLabel->setGeometry(QRect(150, 140, 59, 16));
        TotalAmountLabel = new QLabel(ReservatinDetails);
        TotalAmountLabel->setObjectName(QString::fromUtf8("TotalAmountLabel"));
        TotalAmountLabel->setGeometry(QRect(150, 180, 91, 16));
        label_21 = new QLabel(ReservatinDetails);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(150, 220, 71, 16));
        label_15 = new QLabel(ReservatinDetails);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(270, 120, 59, 16));
        label_16 = new QLabel(ReservatinDetails);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(270, 140, 59, 16));
        label_17 = new QLabel(ReservatinDetails);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(270, 160, 59, 16));
        label_18 = new QLabel(ReservatinDetails);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(270, 180, 59, 16));
        label_19 = new QLabel(ReservatinDetails);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(270, 200, 59, 16));
        label_20 = new QLabel(ReservatinDetails);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(270, 220, 59, 16));
        DetailFrame = new QFrame(ReservatinDetails);
        DetailFrame->setObjectName(QString::fromUtf8("DetailFrame"));
        DetailFrame->setGeometry(QRect(150, 260, 391, 111));
        DetailFrame->setFrameShape(QFrame::StyledPanel);
        DetailFrame->setFrameShadow(QFrame::Raised);
        Total = new QLabel(DetailFrame);
        Total->setObjectName(QString::fromUtf8("Total"));
        Total->setGeometry(QRect(50, 80, 59, 16));
        Total->setFont(font7);
        Tax = new QLabel(DetailFrame);
        Tax->setObjectName(QString::fromUtf8("Tax"));
        Tax->setGeometry(QRect(50, 50, 59, 16));
        Subtotal_2 = new QLabel(DetailFrame);
        Subtotal_2->setObjectName(QString::fromUtf8("Subtotal_2"));
        Subtotal_2->setGeometry(QRect(50, 20, 59, 16));
        Subtotal_2->setFont(font8);
        SubtotalAmnt = new QLabel(DetailFrame);
        SubtotalAmnt->setObjectName(QString::fromUtf8("SubtotalAmnt"));
        SubtotalAmnt->setGeometry(QRect(280, 20, 59, 16));
        TaxAmnt = new QLabel(DetailFrame);
        TaxAmnt->setObjectName(QString::fromUtf8("TaxAmnt"));
        TaxAmnt->setGeometry(QRect(280, 50, 59, 16));
        TotalAmnt = new QLabel(DetailFrame);
        TotalAmnt->setObjectName(QString::fromUtf8("TotalAmnt"));
        TotalAmnt->setGeometry(QRect(280, 80, 59, 16));
        stackedWidget->addWidget(ReservatinDetails);
        FinalThanks = new QWidget();
        FinalThanks->setObjectName(QString::fromUtf8("FinalThanks"));
        THankYouPag = new QLabel(FinalThanks);
        THankYouPag->setObjectName(QString::fromUtf8("THankYouPag"));
        THankYouPag->setGeometry(QRect(340, 50, 181, 81));
        stackedWidget->addWidget(FinalThanks);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        WelcomeButton->setText(QApplication::translate("MainWindow", "- Reserve Stay -", nullptr));
        LogoLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/Desktop/Logo3.png\"/></p></body></html>", nullptr));
        KingButton->setText(QApplication::translate("MainWindow", "King ", nullptr));
        QueenButton->setText(QApplication::translate("MainWindow", "2 Queens", nullptr));
        HeaderText->setText(QApplication::translate("MainWindow", "Choose your bed type", nullptr));
        AtriumButton->setText(QApplication::translate("MainWindow", "Atrium", nullptr));
        StandardButton->setText(QApplication::translate("MainWindow", "Standard", nullptr));
        Header_7->setText(QApplication::translate("MainWindow", "Choose your room type", nullptr));
        ProceedReservBttn->setText(QApplication::translate("MainWindow", "Proceed ", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "How many nights will you stay?", nullptr));
        Header_2->setText(QApplication::translate("MainWindow", "Reservation Dates", nullptr));
        AdultLabel->setText(QApplication::translate("MainWindow", "How Many Adults(18+)?", nullptr));
        childrenLabel->setText(QApplication::translate("MainWindow", "How Many Children?", nullptr));
        Header->setText(QApplication::translate("MainWindow", "Reservation Details", nullptr));
        ParkingCheckBox->setText(QApplication::translate("MainWindow", "Parking (12.75)?", nullptr));
        ProceedBttn->setText(QApplication::translate("MainWindow", "Proceed ", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Total Charges", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "+", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "+", nullptr));
        RoomChargeAmnt->setText(QApplication::translate("MainWindow", "50.00", nullptr));
        ParkingFeeAmnt->setText(QApplication::translate("MainWindow", "12.49", nullptr));
        ResortFeeAmnt->setText(QApplication::translate("MainWindow", "15.00", nullptr));
        label->setText(QApplication::translate("MainWindow", "Room Charge", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Parking Fee", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Resort Fee", nullptr));
        Total_2->setText(QApplication::translate("MainWindow", "TOTAL", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Tax", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Subtotal", nullptr));
        SubtotalAmntReview->setText(QApplication::translate("MainWindow", "69.99", nullptr));
        TaxAmntReview->setText(QApplication::translate("MainWindow", "6.99", nullptr));
        TotalAmntReview->setText(QApplication::translate("MainWindow", "78.99", nullptr));
        VisaButton->setText(QApplication::translate("MainWindow", "Visa", nullptr));
        MasterCardButton->setText(QApplication::translate("MainWindow", "MasterCard", nullptr));
        DiscoverButton->setText(QApplication::translate("MainWindow", "Discover", nullptr));
        AmericanExpressButton->setText(QApplication::translate("MainWindow", "American Express", nullptr));
        PayNowButton->setText(QApplication::translate("MainWindow", "Pay Now", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Check  Out", nullptr));
        CardEntryLine->setInputMask(QApplication::translate("MainWindow", "9999-9999-9999;_", nullptr));
        NumNightsLabel->setText(QApplication::translate("MainWindow", "Nights: ", nullptr));
        ParkingLabel->setText(QApplication::translate("MainWindow", "Parking:", nullptr));
        StartDate->setText(QApplication::translate("MainWindow", "Start Date:", nullptr));
        RoomTypeLabel->setText(QApplication::translate("MainWindow", "Room Type:", nullptr));
        NumAdultsLabel->setText(QApplication::translate("MainWindow", "Adults:", nullptr));
        TotalAmountLabel->setText(QApplication::translate("MainWindow", "Total Amount", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "Resort Fee", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        Total->setText(QApplication::translate("MainWindow", "TOTAL", nullptr));
        Tax->setText(QApplication::translate("MainWindow", "Tax", nullptr));
        Subtotal_2->setText(QApplication::translate("MainWindow", "Subtotal", nullptr));
        SubtotalAmnt->setText(QApplication::translate("MainWindow", "69.99", nullptr));
        TaxAmnt->setText(QApplication::translate("MainWindow", "6.99", nullptr));
        TotalAmnt->setText(QApplication::translate("MainWindow", "78.99", nullptr));
        THankYouPag->setText(QApplication::translate("MainWindow", "Thank You Page ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
