#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_BedProceed_clicked();

    void on_WelcomeButton_clicked();


     void on_KingButton_clicked();

     void on_QueenButton_clicked();

     /**
      * @brief calculateTotalCost Calculates the total cost for the user's stay
      * @return returns the total cost
      */
     float calculateTotalCost();


     int on_AdultSpinbox_valueChanged(int numAdults);

     int on_ChildrenSpinbox_valueChanged(int numChildren);

     int on_NumNights_valueChanged(int arg1);



     void on_StandardButton_clicked();

     void on_AtriumButton_clicked();


     void on_visaradio_clicked();

     void on_masterradio_clicked();

     void on_discoradio_clicked();

     void on_americanradio_clicked();

     void on_pushButton_2_clicked();


     void on_BedProceed_2_clicked();

     void on_proceedButton_clicked();

     void on_pushButton_3_clicked();

private:
    int checkButton();
    bool kingButton,atriumButton, queenButton, standardButton;
    bool bedProceed = false;
    bool parking = false;
    int adultsStaying = 0;
    int kidsStaying = 0;
    int nightsStaying = 0;
    QString CreditCardNumber;
    QString RezName;


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
