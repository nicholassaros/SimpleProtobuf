#include "ConsumerManager.h"


ConsumerData::ConsumerData(std::shared_ptr<Consumer> consumer, std::thread consumerThread)
  : m_Consumer(std::move(consumer)), m_ConsumerThread(std::move(consumerThread)) {

  };

ConsumerManager::ConsumerManager(std::shared_ptr<ThreadSafeQueue> threadSafeQueue, int consumerCount) 
  : m_ThreadSafeQueue(threadSafeQueue), m_ConsumerCount(consumerCount) {
    std::cout << "Starting ConsumerManager ..." << std::endl;

    for(int i = 0 ; i < m_ConsumerCount; i++) {
        std::shared_ptr<Consumer> consumer = std::make_shared<Consumer>(m_ThreadSafeQueue, i);
        std::string consumerId = consumer->getId(); 
        std::cout << "Created Consumer [" << consumerId << "]" << std::endl;

        std::thread consumerThread([consumer]() {
            consumer->consume();
        });
        std::cout << "Created thread for Consumer [" << consumerId << "]" << std::endl;

        m_Consumers.emplace_back(consumer, std::move(consumerThread));
        std::cout << "Saved thread and pointer for Consumer [" << consumerId << "]" << std::endl;
    }

};

ConsumerManager::~ConsumerManager() {
    std::cout << "Destructor called for Consumer Manager. Joining all Consumer Threads" << std::endl;
    for(auto& consumerData : m_Consumers) {
        consumerData.m_Consumer->stop();
        if(consumerData.m_ConsumerThread.joinable()) {
           consumerData.m_ConsumerThread.join();
        }
    }
};




