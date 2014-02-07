#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRect>
#include <QDesktopWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    Mettre la fenêtre au centre de l'écran
    QRect position = frameGeometry();
    position.moveCenter(QDesktopWidget().availableGeometry().center());
    move(position.topLeft());

    ui->lineEdit->setValidator(new QDoubleValidator(0,9,5,this)); // Accepter les nombres décimaux seulement
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addTheNumber(int z)
{
    if(ui->lineEdit->text().isEmpty())
    {
        ui->lineEdit->setText(QString::number(z));
    }
    else
    {
        ui->lineEdit->setText(ui->lineEdit->text() + QString::number(z));
    }
}

void MainWindow::on_toolButton_1_clicked()
{
    this->addTheNumber(1);
}

void MainWindow::on_toolButton_2_clicked()
{
    this->addTheNumber(2);
}

void MainWindow::on_toolButton_3_clicked()
{
    this->addTheNumber(3);
}

void MainWindow::on_toolButton_4_clicked()
{
    this->addTheNumber(4);
}

void MainWindow::on_toolButton_5_clicked()
{
    this->addTheNumber(5);
}

void MainWindow::on_toolButton_6_clicked()
{
    this->addTheNumber(6);
}

void MainWindow::on_toolButton_7_clicked()
{
    this->addTheNumber(7);
}

void MainWindow::on_toolButton_8_clicked()
{
    this->addTheNumber(8);
}

void MainWindow::on_toolButton_9_clicked()
{
    this->addTheNumber(9);
}

void MainWindow::on_toolButton_0_clicked()
{
    this->addTheNumber(0);
}

void MainWindow::on_toolButton_dot_clicked()
{
    if(!ui->lineEdit->text().isEmpty())
    {
        QString str = ui->lineEdit->text();
        if(!str.contains(","))
        {
            ui->lineEdit->setText(str + ",");
        }
    }
}

void MainWindow::on_toolButton_clear_clicked()
{
    ui->lineEdit->setText("");
}

void MainWindow::on_toolButton_equals_clicked()
{
    switch (this->OPERATION) {
    case 1:
        this->result = this->inter + ui->lineEdit->text().toDouble();
        break;
    case 2:
        this->result = this->inter - ui->lineEdit->text().toDouble();
        break;
    case 3:
        this->result = this->inter * ui->lineEdit->text().toDouble();
        break;
    case 4:
        this->result = this->inter / ui->lineEdit->text().toDouble();
        break;
    default:
        break;
    }

    ui->lineEdit->setText(QString::number(this->result));
}

void MainWindow::changeOperation(int i)
{
    if( ui->lineEdit->text() != "") {
        this->inter = ui->lineEdit->text().toDouble();
    }
    this->OPERATION = i;
    ui->lineEdit->setText("");
}

void MainWindow::on_toolButton_plus_clicked()
{
    changeOperation(1);
}

void MainWindow::on_toolButton_minus_clicked()
{
    changeOperation(2);
}

void MainWindow::on_toolButton_times_clicked()
{
    changeOperation(3);
}

void MainWindow::on_toolButton_divide_clicked()
{
    changeOperation(4);
}
