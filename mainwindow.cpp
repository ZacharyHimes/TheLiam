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


    connect(ui->KingButton,SIGNAL(clicked()),this,SLOT(KingButtonClicked()));
    connect(ui->QueenButton,SIGNAL(clicked()),this,SLOT(AtriumButtonClicked()));


    //do not know why this is not working. Exactly as Dr. Park did and what I found online



    //how to output everything
    //ui->FirstOutput->setText();
    //ui->NumNightsOutput->setText();
    //ui->ParkOutput->setText();
    //ui->RoomOutput->setText();
    //ui->NumAdultOutput->setText();
    //ui->NumKidOutput->setText();
    //ui->CreditOutput->setText(CreditCardNumber);
    //ui->TotalOutput->setText();
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




float MainWindow::calculateTotalCost()
{
    float totalCost = -1;

    totalCost = calculateRoomCost() * nightsStaying;

    if(parking)
        totalCost += (12.75 * nightsStaying);

    return totalCost;
}

float MainWindow::calculateRoomCost()
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
    ui->CardEntryLine->setInputMask("");
    ui->CardEntryLine->setInputMask("6999-9999-9999-9999;#");
}

void MainWindow::on_VisaRadio_clicked()
{
    ui->CardEntryLine->setInputMask("");
    ui->CardEntryLine->setInputMask("4999-9999-9999-9999;#");
}

void MainWindow::on_MasterRadio_clicked()
{
    ui->CardEntryLine->setInputMask("");
    ui->CardEntryLine->setInputMask("5999-9999-9999-9999;#");
}

void MainWindow::on_AmericanRadio_clicked()
{
    ui->CardEntryLine->setInputMask("");
    ui->CardEntryLine->setInputMask("3999-999999-99999;#");
}
