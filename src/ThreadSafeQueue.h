#ifndef THREAD_SAFE_QUEUE
#define THREAD_SAFE_QUEUE

#include "QueueMessage.pb.h"

#include <iostream>
#include <queue>
#include <mutex>
#include <condition_variable>

class ThreadSafeQueue {
    public:
        ThreadSafeQueue();

        ~ThreadSafeQueue();

        QueueMessage getMessage();
        
        void pushMessage(QueueMessage message);

        int getSize();

    private:
        std::queue<QueueMessage>    m_Queue;
        std::mutex                  m_Mutex;
        std::condition_variable     m_Cv;

        QueueMessage pop();

        int getQueueSize();

        void push(QueueMessage message);


};
#endif