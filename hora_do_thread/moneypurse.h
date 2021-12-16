#ifndef MONEYPURSE_H
#define MONEYPURSE_H

#include <QLabel>
#include "semaphore.h"
class MoneyPurse
{
public:
    MoneyPurse(QLabel *money_label);
    bool addMoney(int value);
    void setLabel(QLabel *money_label);
    int getBalance();
    void spendMoney(int value);
private:
    int balance = 0;
    Semaphore *sem = new Semaphore();
    QLabel *money_label;
    void updateLabel();

};

#endif // MONEYPURSE_H
