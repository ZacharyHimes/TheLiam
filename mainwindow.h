#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QDate>
#include <QStringRef>

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
     double calculateTotalCost();

     /**
      * @brief calculateRoomCost Calculates the total cost of the room for one night and stores it in the reservationRoom cost.
      */
     void calculateRoomCost();
     double subTotal();

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

     void on_ProceedGuests_clicked();

     void on_ProceedDatesBttn_clicked();

     void on_PayNowButton_clicked();

     void on_ProceedCharges_clicked();

     void on_ResProceedButton_clicked();

     void on_NumAdultsBox_valueChanged(int arg1);

     void on_NumKidsBox_valueChanged(int arg1);



     void on_ProceedCharges_6_clicked();


     void on_ExitButton_clicked();



     void on_NumAdultsBox_textChanged(const QString &arg1);

private:
    const int ATRIUM_KING = 350;
    const int STANDARD_KING = 290;
    const int ATRIUM_QUEEN = 325;
    const int STANDARD_QUEEN = 284;
    int checkButton();
    bool kingButton,atriumButton, queenButton, standardButton;
    bool bedProceed = false;
    bool parking = false;
    int adultsStaying = 0;
    int kidsStaying = 0;
    int nightsStaying = 0;
    bool CreditCardType = false; //If false, it is not American and has 16 characters
    QString CreditCardNumber;
    QString RezName;
    QDate reservationStartDate;
    QString ExpirationDate;
    struct Room{
        QString RoomType;
        QString BedType;
        double CostPerNight;
    }reservationRoom;


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
