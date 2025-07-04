#ifndef PRODUCER_MANAGER
#define PRODUCER_MANAGER

#include "ThreadSafeQueue.h"
#include "Producer.h"

#include <iostream>
#include <memory>
#include <atomic>
#include <vector>
#include <thread>

struct ProducerData {
    std::shared_ptr<Producer>   m_Producer;
    std::thread                 m_ProducerThread;

    ProducerData(std::shared_ptr<Producer>, std::thread);
};

class ProducerManager {
    public:
        ProducerManager(std::shared_ptr<ThreadSafeQueue>, int);

        ~ProducerManager();
    private:
        std::shared_ptr<ThreadSafeQueue>        m_ThreadSafeQueue; 
        std::vector<ProducerData>               m_Producers;
        int                                     m_ProducerCount;
};


#endif