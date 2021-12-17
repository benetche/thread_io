#include "autoclicker.h"

AutoClicker::AutoClicker(MoneyPurse *purse,
                         int DEFAULT_PRICE,
                         int TICK,
                         double PRICE_MULTIPLIER,
                         int MONEY_GEN,
                         QLabel *price_label)
{
    this->purse = purse;
    this->TICK = TICK;
    this->PRICE_MULTIPLIER = PRICE_MULTIPLIER;
    this->MONEY_GEN = MONEY_GEN;
    this->price_label = price_label;
    this->DEFAULT_PRICE = DEFAULT_PRICE;
    setPrice();
    this->active = false;
}

AutoClicker::~AutoClicker(){
    this->active = false;
    this->clicker->join();
}

//atualiza o valor do autoclicker
void AutoClicker::setPrice(){
    if(this->getQuant() == 0){
        this->act_price = this->DEFAULT_PRICE;
    }
    else{
        this->act_price = int(this->act_price * (this->PRICE_MULTIPLIER ));
    }
    this->updatePriceLabel();
}


int AutoClicker::getPrice(){
    return this->act_price;
};

int AutoClicker::getTickRate(){
    return this->TICK;
};

int AutoClicker::getQuant(){
    return this->QUANT;
};

void AutoClicker::updatePriceLabel(){
    this->price_label->setText(QString::number(act_price));
}

//realiza operacao de compra de autoclicker
void AutoClicker::handleBuy(){

    if(this->purse->getBalance() >= this->act_price){
        this->purse->spendMoney(act_price);
        this->QUANT++;
        this->setPrice();
    }    
    //cria uma thread na primeira compra do autoclicker
    if(!this->active){
        this->active = true;
        this->clicker = new std::thread(&AutoClicker::autoclick, this);
    }
}

//realiza a acao de autoclick a partir de uma thread
void AutoClicker::autoclick(){
    while(this->active){
        //a thread ficara "congelada" enquanto o autoclicker nao gera moedas (TICK)
        std::this_thread::sleep_for(std::chrono::milliseconds(this->TICK));
        this->purse->addMoney(this->MONEY_GEN * this->QUANT);
    }
}
