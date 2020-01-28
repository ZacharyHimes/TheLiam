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

     float calculateRoomCost();


     int on_AdultSpinbox_valueChanged(int numAdults);

     int on_ChildrenSpinbox_valueChanged(int numChildren);

     int on_NumNights_valueChanged(int arg1);



     void on_StandardButton_clicked();

     void on_AtriumButton_clicked();


     void on_pushButton_2_clicked();


     void on_BedProceed_2_clicked();

     void on_proceedButton_clicked();

     void on_pushButton_3_clicked();

     void on_DiscoRadio_clicked();

     void on_VisaRadio_clicked();

     void on_MasterRadio_clicked();

     void on_AmericanRadio_clicked();

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

    struct Room{
        QString RoomType;
        QString BedType;
        double CostPerNight;
    }reservationRoom;


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
