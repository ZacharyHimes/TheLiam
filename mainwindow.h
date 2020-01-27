#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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




     int on_AdultSpinbox_valueChanged(int numAdults);

     int on_ChildrenSpinbox_valueChanged(int numChildren);

     int on_NumNights_valueChanged(int arg1);



     void on_StandardButton_clicked();

     void on_AtriumButton_clicked();

     void on_BedProceed_2_clicked();

     void on_ResInput_editingFinished();

     void on_VisaButton_clicked();

     void on_MasterCardButton_clicked();

     void on_DiscoverButton_clicked();

     void on_AmericanExpressButton_clicked();

     void on_CardEntryLine_editingFinished();

     void on_pushButton_clicked();

private:
     int checkButton();
     bool kingButton,atriumButton, queenButton, standardButton;
    bool bedProceed = false;



private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
