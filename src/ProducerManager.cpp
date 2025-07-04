#include "ProducerManager.h"


ProducerData::ProducerData(std::shared_ptr<Producer> producer, std::thread producerThread)
  : m_Producer(std::move(producer)), m_ProducerThread(std::move(producerThread)) {

  };

ProducerManager::ProducerManager(std::shared_ptr<ThreadSafeQueue> threadSafeQueue, int producerCount) 
  : m_ThreadSafeQueue(threadSafeQueue), m_ProducerCount(producerCount) {

    for(int i = 0 ; i<producerCount; i++) {
        std::shared_ptr<Producer> producer = std::make_shared<Producer>(m_ThreadSafeQueue, i);
        std::string producerId = producer->getId(); 
        std::cout << "Created producer [" << producerId << "]" << std::endl;

        std::thread producerThread([producer]() {
            producer->produce();
        });
        std::cout << "Created thread for producer [" << producerId << "]" << std::endl;

        m_Producers.emplace_back(producer, std::move(producerThread));
        std::cout << "Saved thread and pointer for producer [" << producerId << "]" << std::endl;
    }

};

ProducerManager::~ProducerManager() {
    std::cout << "Destructor called for Producer Manager. Joining all Producer Threads" << std::endl;
    for(auto& producerData : m_Producers) {
        producerData.m_Producer->stop();
        if(producerData.m_ProducerThread.joinable()) {
           producerData.m_ProducerThread.join();
        }
    }
};





