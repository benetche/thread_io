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
    bool active;
    std::thread *clicker = nullptr;

    int QUANT = 0;
    int TICK;
    int DEFAULT_PRICE;
    double PRICE_MULTIPLIER;
    int MONEY_GEN;

    int act_price;
    QString CLICKER_NAME;
    QLabel *price_label;
    MoneyPurse *purse;
    void setPrice();
    void updatePriceLabel();

    void autoclick();

};

#endif // AUTOCLICKER_H
