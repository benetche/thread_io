#include "semaphore.h"

Semaphore::Semaphore(int counter){
    this->counter = counter;
}

void Semaphore::signal(){
    std::unique_lock<std::mutex> lock(this->MUTEX);
    this->counter++;
    this->COND.notify_one();
}

void Semaphore::wait(){
    std::unique_lock<std::mutex> lock(this->MUTEX);
    while(counter == 0){
        COND.wait(lock);
    }
    counter--;
}
