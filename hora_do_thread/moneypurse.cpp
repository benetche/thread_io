#include "moneypurse.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MoneyPurse::MoneyPurse(QLabel *money_label){
    this->setLabel(money_label);
}


//atualiza o label que representa o dinheiro
void MoneyPurse::updateLabel(){
    this->money_label->setText(QString::number(balance));
}

//adiciona dinheiro na conta do jogador
bool MoneyPurse::addMoney(int value){
    this->sem->wait();  //semaforo "trancado" -> impede que outras threads acessem  o recurso MoneyPurse ate que
                        //as operacoes sejam concluidas

    this->balance += value;
    this->updateLabel();

    this->sem->signal(); //semaforo "livre"
    return true;
}

int MoneyPurse::getBalance(){
    return this->balance;
}

void MoneyPurse::setLabel(QLabel *money_label){
    this->money_label = money_label;
}

//retira dinheiro da conta do jogador
void MoneyPurse::spendMoney(int value){
    this->sem->wait();          //semaforo "trancado" -> impede que outras threads acessem  o recurso MoneyPurse ate que
                                //as operacoes sejam concluidas

    this->balance -= value;
    this->updateLabel();

    this->sem->signal();        //semaforo "livre"
}
