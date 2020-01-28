#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLCDNumber>
#include <QString>
#include <QPlainTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    static const char ENV_VAR_QT_DEVICE_PIXEL_RATIO[] = "QT_DEVICE_PIXEL_RATIO";
    if (!qEnvironmentVariableIsSet(ENV_VAR_QT_DEVICE_PIXEL_RATIO)
            && !qEnvironmentVariableIsSet("QT_AUTO_SCREEN_SCALE_FACTOR")
            && !qEnvironmentVariableIsSet("QT_SCALE_FACTOR")
            && !qEnvironmentVariableIsSet("QT_SCREEN_SCALE_FACTORS")) {
        QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_WelcomeButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_KingButton_clicked()
{
    reservationRoom.BedType = "King";
    ui->stackedWidget->setCurrentIndex(3);

}
void MainWindow::on_QueenButton_clicked()
{
    reservationRoom.BedType = "2 Queen";
    ui->stackedWidget->setCurrentIndex(3);
}




double MainWindow::calculateTotalCost()
{
    float totalCost = -1;
    calculateRoomCost();
    totalCost =  reservationRoom.CostPerNight * nightsStaying;

    if(parking)
        totalCost += (12.75 * nightsStaying);

    return totalCost;
}

void MainWindow::calculateRoomCost()
{
    if(reservationRoom.RoomType == "Atrium" && reservationRoom.BedType == "King")
        reservationRoom.CostPerNight = 350;
    if(reservationRoom.RoomType == "Standard" && reservationRoom.BedType == "King")
        reservationRoom.CostPerNight = 290;
    if(reservationRoom.RoomType == "Atrium" && reservationRoom.BedType == "2 Queen")
        reservationRoom.CostPerNight = 325;
    if(reservationRoom.RoomType == "Standard" && reservationRoom.BedType == "2 Queen")
        reservationRoom.CostPerNight = 284;
}

void MainWindow::on_BedProceed_clicked()
{

    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_StandardButton_clicked()
{
    reservationRoom.RoomType = "Standard";
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_AtriumButton_clicked()
{
    reservationRoom.RoomType = "Atrium";
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_BedProceed_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_proceedButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


int MainWindow::on_AdultSpinbox_valueChanged(int numAdults)
{
    return numAdults;
}

int MainWindow::on_ChildrenSpinbox_valueChanged(int numChildren)
{
    return numChildren;
}

int MainWindow::on_NumNights_valueChanged(int arg1)
{
    return arg1;
}



void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);

}

//Confirmation

void MainWindow::on_DiscoRadio_clicked()
{
    ui->CreditInfo->setInputMask("");
    ui->CreditInfo->setInputMask("6999-9999-9999-9999;#");
}

void MainWindow::on_VisaRadio_clicked()
{
    ui->CreditInfo->setInputMask("");
    ui->CreditInfo->setInputMask("4999-9999-9999-9999;#");
}

void MainWindow::on_MasterRadio_clicked()
{
    ui->CreditInfo->setInputMask("");
    ui->CreditInfo->setInputMask("5999-9999-9999-9999;#");
}

void MainWindow::on_AmericanRadio_clicked()
{
    ui->CreditInfo->setInputMask("");
    ui->CreditInfo->setInputMask("3999-999999-99999;#");
}

void MainWindow::on_ProceedGuests_clicked()
{
    adultsStaying = ui->NumAdultsBox->value();
    kidsStaying = ui->NumKidsBox->value();
    parking = ui->ParkingCheckBox->checkState();

    //Generate Cost for total cost page
    ui->RoomTypeLabel->setText(reservationRoom.RoomType);
    ui->RoomTypeLabel->setText(reservationRoom.BedType);
    ui->ParkingTypeEdit->setText(QString (parking));
}

void MainWindow::on_ProceedDatesBttn_clicked()
{
    reservationStartDate = ui->CalendarWidget->selectedDate();
    nightsStaying = ui->NumNightsBox->value();
}

void MainWindow::on_PayNowButton_clicked()
{

    CreditCardNumber = ui->CreditInfo->text();

    ui->ResOutput->setText("Reservation Name Goes Here");
    ui->FirstOutput->setText(reservationStartDate.toString());
    ui->ParkOutput->setText(QString (parking));
    ui->ResOutput->setText(reservationRoom.RoomType + " " + reservationRoom.BedType);
    ui->NumAdultOutput->setText(QString (adultsStaying));
    ui->NumKidsOutput->setText(QString (kidsStaying));
    QStringRef lastFour(&CreditCardNumber,CreditCardNumber.size()-4, CreditCardNumber.size());
    ui->CreditOutput->setText("Ending in " + lastFour);
    ui->TotalOutput->setText(QString::number(calculateTotalCost()));
}
