#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QtMath>
#define Pi "3.14159265359"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void Initialization();
    void invalidOperation();
    void deleteLastDot();
    void displayNumber();

    QString lastNumber;
    double resultSoFar;
    QString pendingOperator;
    bool waitingForOperand;
    double equalOperand;
    QString pendingOperatorForEqual;

private slots:
    void DigitButtonPressed();
    void on_pushButton_div_clicked();
    void on_pushButton_com_clicked();
    void on_pushButtonC_clicked();
    void on_pushButton_AC_clicked();
    void on_pushButton_BS_clicked();
    void on_pushButton_pm_clicked();
    void on_pushButton_proc_clicked();
    void on_pushButton_1X_clicked();
    void on_pushButton_Cos_clicked();
    void on_pushButton_Sin_clicked();
    void on_pushButton_Sqrt_clicked();
    void on_pushButton_ln_clicked();
    void on_pushButton_Exp_clicked();
    bool calculate(double rightOperand);
    void on_pushButton_mul_clicked();
    void on_pushButton_sub_clicked();
    void on_pushButton_add_clicked();
    void on_pushButton_equ_clicked();
};

#endif // MAINWINDOW_H
