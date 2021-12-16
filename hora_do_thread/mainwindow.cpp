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
    //creating money wallet
    this->purse = new MoneyPurse(ui->money_label);
    //creating Trader AutoClicker
    this->trader = new AutoClicker(this->purse,
                                   15,
                                   1000,
                                   1.2,
                                   1,
                                   ui->trader_price
                                   );
    //creating GPU AutoClicker
    this->gpu = new AutoClicker(this->purse,
                                150,
                                5000,
                                1.4,
                                40,
                                ui->gpu_price
                                );
    //creating Mining Rig AutoClicker
    this->rig = new AutoClicker(this->purse,
                                3000,
                                20000,
                                1.6,
                                200,
                                ui->rig_price
                                );

}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_click_button_clicked(){
    this->purse->addMoney(1);
}


void MainWindow::on_trader_buy_clicked(){
    this->trader->handleBuy();
    ui->trader_quant->setText("TRADERS: " + QString::number(this->trader->getQuant()));
}


void MainWindow::on_pushButton_clicked(){

}

void MainWindow::on_gpu_buy_clicked(){
    this->gpu->handleBuy();
    ui->gpu_quant->setText("GPUs: " + QString::number(this->gpu->getQuant()));
}


void MainWindow::on_rig_buy_clicked(){
    this->rig->handleBuy();
    ui->rig_quant->setText("MINING RIGS: " + QString::number(this->rig->getQuant()));
}

