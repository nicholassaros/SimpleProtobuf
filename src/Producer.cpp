#include "Producer.h"
#include <thread>
#include <chrono>


Producer::Producer(std::shared_ptr<ThreadSafeQueue> threadSafeQueue, int id) 
  : m_ThreadSafeQueue(threadSafeQueue), m_StopFlag(false), m_Id(id) {

};

Producer::~Producer() {
    this->stop();
};

void Producer::produce() {
    while(!m_StopFlag.load()) {
        QueueMessage message = this->generateData();
        this->pushDataToQueue(message);

        std::this_thread::sleep_for(std::chrono::seconds(10));
    }
};

void Producer::stop() {
    m_StopFlag.store(true);
};

std::string Producer::getId() {
    return std::to_string(this->m_Id);
};


void Producer::pushDataToQueue(QueueMessage message) {
    m_ThreadSafeQueue->pushMessage(message);
};

QueueMessage Producer::generateData() {
    QueueMessage msg;
    msg.set_text("Message from producer!");
    msg.set_id(42);
    return msg;
};

