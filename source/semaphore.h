#ifndef SEMAPHORE_H
#define SEMAPHORE_H

#include <mutex>
#include <condition_variable>

class Semaphore
{
public:
    Semaphore(int counter=1);
    void wait();
    void signal();
private:
    int counter;
    std::mutex MUTEX;
    std::condition_variable COND;

};




#endif // SEMAPHORE_H
