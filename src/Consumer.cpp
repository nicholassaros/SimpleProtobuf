#include "Consumer.h"
#include "ThreadSafeQueue.h"

#include <thread>
#include <chrono>


Consumer::Consumer(std::shared_ptr<ThreadSafeQueue> threadSafeQueue, int id) 
  : m_ThreadSafeQueue(threadSafeQueue), m_StopFlag(false), m_Id(id), m_Name("[CONSUMER " + std::to_string(id) + "] ") {

};

Consumer::~Consumer() {
    this->stop();
};

void Consumer::consume() {
   while(!m_StopFlag.load()) {
        std::string message = this->getDataFromQueue();
        std::cout << m_Name << "Reading message: " << message << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
    } 
};

void Consumer::stop() {
    m_StopFlag.store(true);
};

std::string Consumer::getId() {
    return std::to_string(this->m_Id);
};


std::string Consumer::getDataFromQueue() {
    QueueMessage message = m_ThreadSafeQueue->getMessage();
    return this->parseData(message);
};

std::string Consumer::parseData(QueueMessage message) {
    return message.text();
}

