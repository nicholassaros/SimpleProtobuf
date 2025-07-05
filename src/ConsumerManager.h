#ifndef CONSUMER_MANAGER
#define CONSUMER_MANAGER

#include "ThreadSafeQueue.h"
#include "Consumer.h"

#include <iostream>
#include <memory>
#include <atomic>
#include <vector>
#include <thread>

struct ConsumerData {
    std::shared_ptr<Consumer>   m_Consumer;
    std::thread                 m_ConsumerThread;

    ConsumerData(std::shared_ptr<Consumer>, std::thread);
};

class ConsumerManager {
    public:
        ConsumerManager(std::shared_ptr<ThreadSafeQueue>, int);

        ~ConsumerManager();
    private:
        std::shared_ptr<ThreadSafeQueue>        m_ThreadSafeQueue; 
        std::vector<ConsumerData>               m_Consumers;
        int                                     m_ConsumerCount;
};


#endif