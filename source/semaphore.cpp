#include "semaphore.h"

Semaphore::Semaphore(int counter){
    this->counter = counter;
}

//operacao "up" -> chamada quando a thread acaba de utilizar o recurso MoneyPurse
void Semaphore::signal(){
    std::unique_lock<std::mutex> lock(this->MUTEX);
    this->counter++;
    this->COND.notify_one();
}

//operacao "down" -> chamada quando uma thread deseja utilizar  o recurso MoneyPurse
void Semaphore::wait(){
    std::unique_lock<std::mutex> lock(this->MUTEX);
    while(counter == 0){
        this->COND.wait(lock);
    }
    counter--;
}
