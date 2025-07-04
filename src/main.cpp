#include "QueueMessage.pb.h"
#include "ThreadSafeQueue.h"
#include "ProducerManager.h"

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
    std::cout << "Created Queue ..." << std::endl;

    std::shared_ptr<ProducerManager> producerManager = std::make_shared<ProducerManager>(threadSafeQueue, 5);
     std::cout << "Started ProducerManager ..." << std::endl;


    google::protobuf::ShutdownProtobufLibrary();
    return 0;
}