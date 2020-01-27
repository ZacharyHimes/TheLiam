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
