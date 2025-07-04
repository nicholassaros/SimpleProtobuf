#ifndef PRODUCER
#define PRODUCER

#include "ThreadSafeQueue.h"

#include <iostream>


class Producer {
    public:
        Producer(std::shared_ptr<ThreadSafeQueue>, int);

        ~Producer();

        void produce();

        void stop();

        std::string getId();

    private:
        std::shared_ptr<ThreadSafeQueue> m_ThreadSafeQueue;
        std::atomic<bool>                m_StopFlag;
        int                              m_Id;

        void pushDataToQueue(QueueMessage message);

        QueueMessage generateData();
};

#endif