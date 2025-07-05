#include "QueueMessage.pb.h"
#include "ThreadSafeQueue.h"
#include "ProducerManager.h"
#include "ConsumerManager.h"

#include <memory>
#include <iostream>


int main() {
    GOOGLE_PROTOBUF_VERIFY_VERSION;
    /*
        QueueMessage msg;
    msg.set_text("Hello from protobuf");
    msg.set_id(42);

    std::cout << "Message: " << msg.text() << ", ID: " << msg.id() << std::endl; 
    
    */

    std::cout << "Starting PubSub ..." << std::endl;

    std::shared_ptr<ThreadSafeQueue> threadSafeQueue = std::make_shared<ThreadSafeQueue>();
    std::shared_ptr<ProducerManager> producerManager = std::make_shared<ProducerManager>(threadSafeQueue, 5);
    std::shared_ptr<ConsumerManager> consumerManager = std::make_shared<ConsumerManager>(threadSafeQueue, 3);


    while(true) {

        std::cout << "Queue size: " << std::to_string(threadSafeQueue->getSize()) << std::endl;

        if(threadSafeQueue->getSize() > 100) {
            std::cout << "Queue limit exceeded!" << std::endl;
            exit(1);
        }
        std::this_thread::sleep_for(std::chrono::seconds(10));
    }




    google::protobuf::ShutdownProtobufLibrary();
    return 0;
}