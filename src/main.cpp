#include <iostream>
#include "QueueMessage.pb.h"

int main() {
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    QueueMessage msg;
    msg.set_text("Hello from protobuf");
    msg.set_id(42);

    std::cout << "Message: " << msg.text() << ", ID: " << msg.id() << std::endl;

    google::protobuf::ShutdownProtobufLibrary();
    return 0;
}