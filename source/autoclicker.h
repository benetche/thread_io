#ifndef AUTOCLICKER_H
#define AUTOCLICKER_H

#include "moneypurse.h"
#include <QString>
#include <QLabel>
#include <thread>
#include <chrono>


class AutoClicker
{
public:
    AutoClicker(MoneyPurse *purse,
                int DEFAULT_PRICE,
                int TICK,
                double PRICE_MULTIPLIER,
                int MONEY_GEN,
                QLabel *price_label
                );
    ~AutoClicker();
    int getPrice();
    int getTickRate();
    int getQuant();
    void handleBuy();

private:
    bool active;    //verifica se a thread esta ativa
    std::thread *clicker = nullptr;

    int QUANT = 0;      //quantidade de autoclickers
    int TICK;          //tempo em ms para gerar dinheiro
    int DEFAULT_PRICE; //valor padrao
    double PRICE_MULTIPLIER;  //multiplicador do valor apos compra
    int MONEY_GEN;      //quantidade de dinheiro a ser gerado pelo clicker

    int act_price;      //preco atual -> variavel

    QLabel *price_label;

    MoneyPurse *purse;
    void setPrice();
    void updatePriceLabel();

    void autoclick();

};

#endif // AUTOCLICKER_H
