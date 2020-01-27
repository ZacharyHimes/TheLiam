#include "mainwindow.h"

#include <QApplication>
#include <QLCDNumber>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
    int numNights = 0;
    int totalPrice = 0;
    int on_NumNights_valueChanged( numNights);
    void on_QueenButton_clicked();

    void on_StandardButton_clicked();

    int on_AdultSpinbox_valueChanged(int numAdults);

    int on_ChildrenSpinbox_valueChanged(int numChildren);

    int checkButton();
    totalPrice = checkButton() * numNights;


}
