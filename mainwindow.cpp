#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLCDNumber>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect(ui->KingButton,SIGNAL(clicked()),this,SLOT(KingButtonClicked()));
    connect(ui->QueenButton,SIGNAL(clicked()),this,SLOT(AtriumButtonClicked()));
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
         ui->stackedWidget->setCurrentIndex(3);

}
void MainWindow::on_QueenButton_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_BedProceed_clicked()
{

    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_StandardButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_AtriumButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
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





void MainWindow::on_BedProceed_2_clicked()
{
      ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_ResInput_editingFinished()
{

}

void MainWindow::on_VisaButton_clicked()
{
    ui->CardEntryLine->setInputMask("");
    ui->CardEntryLine->setInputMask("4999-9999-9999-9999;#");
}

void MainWindow::on_MasterCardButton_clicked()
{
    ui->CardEntryLine->setInputMask("");
    ui->CardEntryLine->setInputMask("5999-9999-9999-9999;#");

}

void MainWindow::on_DiscoverButton_clicked()
{
    ui->CardEntryLine->setInputMask("");
    ui->CardEntryLine->setInputMask("6999-9999-9999-9999;#");

}

void MainWindow::on_AmericanExpressButton_clicked()
{
    ui->CardEntryLine->setInputMask("");
    ui->CardEntryLine->setInputMask("3999-999999-99999;#");

}

void MainWindow::on_CardEntryLine_editingFinished()
{
    ui->stackedWidget->setCurrentIndex(7);

}

void MainWindow::on_pushButton_clicked()
{

}
