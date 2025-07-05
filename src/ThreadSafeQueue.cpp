#include "ThreadSafeQueue.h"


ThreadSafeQueue::ThreadSafeQueue() {
    std::cout << "Starting ThreadSafeQueue ..." << std::endl;
};

ThreadSafeQueue::~ThreadSafeQueue() {
    std::cout << "Destructor called for ThreadSafeQueue" << std::endl;
};

QueueMessage ThreadSafeQueue::getMessage() {
    return this->pop();
};

void ThreadSafeQueue::pushMessage(QueueMessage message) {
    this->push(message);
};

int ThreadSafeQueue::getSize() {
    return this->getQueueSize();
}

QueueMessage ThreadSafeQueue::pop() {
    std::unique_lock<std::mutex> lock(m_Mutex);

    m_Cv.wait(lock,[this] { return !m_Queue.empty(); });

    QueueMessage message = m_Queue.front();
    m_Queue.pop();
    return message;
};

void ThreadSafeQueue::push(QueueMessage message) {
    std::unique_lock<std::mutex> lock(m_Mutex);
    m_Queue.push(message);
    m_Cv.notify_one();
};

int ThreadSafeQueue::getQueueSize() {
    std::unique_lock<std::mutex> lock(m_Mutex);
    return m_Queue.size();
};

