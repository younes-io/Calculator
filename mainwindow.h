#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_toolButton_1_clicked();
    void on_toolButton_2_clicked();
    void on_toolButton_3_clicked();
    void on_toolButton_4_clicked();
    void on_toolButton_5_clicked();
    void on_toolButton_6_clicked();
    void on_toolButton_7_clicked();
    void on_toolButton_8_clicked();
    void on_toolButton_9_clicked();
    void on_toolButton_0_clicked();

    void on_toolButton_dot_clicked();
    void on_toolButton_clear_clicked();

    void on_toolButton_plus_clicked();
    void on_toolButton_equals_clicked();
    void on_toolButton_minus_clicked();
    void on_toolButton_times_clicked();
    void on_toolButton_divide_clicked();

private:
    Ui::MainWindow *ui;
    void addTheNumber(int z);
    void changeOperation(int i);
    double inter;
    double result;
    int OPERATION;
};

#endif // MAINWINDOW_H
