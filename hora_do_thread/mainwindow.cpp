#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QLabel>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    this->purse = new MoneyPurse(ui->money_label);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_clicked()
{
    this->purse->addMoney(1);
}
