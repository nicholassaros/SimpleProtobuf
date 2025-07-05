#ifndef CONSUMER
#define CONSUMER

#include "ThreadSafeQueue.h"

#include <iostream>

class Consumer {
    public:
        Consumer(std::shared_ptr<ThreadSafeQueue>, int);

        ~Consumer();

        void consume();

        void stop();

        std::string getId();

    private:
        std::shared_ptr<ThreadSafeQueue>    m_ThreadSafeQueue;
        std::atomic<bool>                   m_StopFlag;
        std::string                         m_Name;
        int                                 m_Id;

        std::string getDataFromQueue();

        std::string parseData(QueueMessage);
};

#endif