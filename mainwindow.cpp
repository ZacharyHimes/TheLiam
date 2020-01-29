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

    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_WelcomeButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
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
    totalCost =  reservationRoom.CostPerNight * nightsStaying * 1.15;

    if(parking)
        totalCost += (12.75 * nightsStaying);
        totalCost += (15 * nightsStaying);
    return totalCost;
}
double MainWindow::subTotal()
{
    float totalCost = -1;
    calculateRoomCost();
    totalCost =  reservationRoom.CostPerNight * nightsStaying;


    return totalCost;
}

void MainWindow::calculateRoomCost()
{
    if(reservationRoom.RoomType == "Atrium" && reservationRoom.BedType == "King")
        reservationRoom.CostPerNight = ATRIUM_KING;
    if(reservationRoom.RoomType == "Standard" && reservationRoom.BedType == "King")
        reservationRoom.CostPerNight = STANDARD_KING;
    if(reservationRoom.RoomType == "Atrium" && reservationRoom.BedType == "2 Queen")
        reservationRoom.CostPerNight = ATRIUM_QUEEN;
    if(reservationRoom.RoomType == "Standard" && reservationRoom.BedType == "2 Queen")
        reservationRoom.CostPerNight = STANDARD_QUEEN;
}

void MainWindow::on_BedProceed_clicked()
{

    ui->stackedWidget->setCurrentIndex(2);
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
    ui->stackedWidget->setCurrentIndex(7);

}

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
    CreditCardType = true;

}

void MainWindow::on_ProceedGuests_clicked()
{
    adultsStaying = ui->NumAdultsBox->value();
    kidsStaying = ui->NumKidsBox->value();
    parking = ui->ParkingCheckBox->checkState();

    //Generate Costs for total cost page
    ui->RoomTypeEdit->setText(reservationRoom.RoomType);
    ui->BedTypeEdit->setText(reservationRoom.BedType);
    ui->ParkingTypeEdit->setText(parking ? "Yes" : "No");
    ui->TotalChargeBox->setText(QString::number(calculateTotalCost()) );
    ui->ProceedCharges->setText("Pay Now: $" + QString::number(calculateTotalCost()));
    ui->SubtotalAmount->setText(QString::number(subTotal()));
    ui->TaxAmount->setText(QString::number(subTotal() * .15));

    ui->stackedWidget->setCurrentIndex(6);
}
void MainWindow::on_ProceedDatesBttn_clicked()
{
    reservationStartDate = ui->CalendarWidget->selectedDate();
    nightsStaying = ui->NumNightsBox->value();



    QDate todaysDate;
    if(nightsStaying > 0 && nightsStaying <= 7)
        if(reservationStartDate >= todaysDate.currentDate())
            ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_PayNowButton_clicked()
{

    CreditCardNumber = ui->CreditInfo->text();

    ui->ResOutput->setText(RezName);
    ui->FirstOutput->setText(reservationStartDate.toString());
    ui->ParkOutput->setText(parking ? "Yes" : "No");
    ui->ResOutput->setText(reservationRoom.RoomType + " " + reservationRoom.BedType);
    ui->NumAdultsOutput->setText(QString::number(adultsStaying));
    ui->NumKidsOutput->setText(QString::number(kidsStaying));
    ui->NumNightsOutput->setText(QString::number(nightsStaying));
    QString lastFour;
    if(!CreditCardType)
         lastFour = CreditCardNumber.right(CreditCardNumber.size()-15);
    else
        lastFour = CreditCardNumber.right(CreditCardNumber.size()-13);
    ui->CreditOutput->setText("Ending in " + lastFour);
    ui->TotalOutput->setText(QString::number(calculateTotalCost()) );
    if(!CreditCardType){
        if(CreditCardNumber.size() == 19)
            ui->stackedWidget->setCurrentIndex(8);

    } else if(CreditCardNumber.size() == 17)
        ui->stackedWidget->setCurrentIndex(8);

    ExpirationDate = QString::number(ui->MonthSpin->value());
       ExpirationDate += "/";
       ExpirationDate += QString::number(ui->YearSpin->value());
       //ui->ExpOutput->setText(ExpirationDate);
}


void MainWindow::on_ProceedCharges_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_ResProceedButton_clicked()
{
    RezName = ui->ResInput->text();

    if(RezName.size() > 0)
          ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_NumAdultsBox_valueChanged(int arg1)
{
    int maxPeople = 0;
    if(reservationRoom.BedType == "King"){
       maxPeople = 3;
            ui->NumKidsBox->setMaximum(maxPeople - (ui->NumAdultsBox->value()));
    } else if(reservationRoom.BedType == "2 Queen"){
        maxPeople = 4;
            ui->NumKidsBox->setMaximum(maxPeople - (ui->NumAdultsBox->value()));
    }
}

void MainWindow::on_NumKidsBox_valueChanged(int arg1)
{
    int maxPeople = 0;
    if(reservationRoom.BedType == "King"){
       maxPeople = 3;
            ui->NumAdultsBox->setMaximum(maxPeople - ui->NumKidsBox->value());
    } else if(reservationRoom.BedType == "2 Queen"){
        maxPeople = 4;
            ui->NumAdultsBox->setMaximum(maxPeople - ui->NumKidsBox->value());
    }
}



void MainWindow::on_ProceedCharges_6_clicked()
{
  ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_ExitButton_clicked()
{
     QApplication::quit();
}



void MainWindow::on_NumAdultsBox_textChanged(const QString &arg1)
{
    return;
}
