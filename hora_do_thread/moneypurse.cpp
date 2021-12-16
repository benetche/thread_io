#include "moneypurse.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MoneyPurse::MoneyPurse(QLabel *money_label){
    this->setLabel(money_label);
}


void MoneyPurse::updateLabel(){
    this->money_label->setText(QString::number(balance));
}

bool MoneyPurse::addMoney(int value){
    this->sem->wait();

    this->balance += value;
    this->updateLabel();

    this->sem->signal();
    return true;
}

int MoneyPurse::getBalance(){
    return this->balance;
}

void MoneyPurse::setLabel(QLabel *money_label){
    this->money_label = money_label;
}

void MoneyPurse::spendMoney(int value){
    this->sem->wait();

    this->balance -= value;
    this->updateLabel();

    this->sem->signal();
}
