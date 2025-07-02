cmake_minimum_required(VERSION 3.10)
project(SimpleProtobuf)

set(CMAKE_CXX_STANDARD 17)

find_package(Protobuf REQUIRED CONFIG)
find_package(absl REQUIRED CONFIG)

# Defined when calling find_package with "Protobuf"

include_directories(${CMAKE_CURRENT_BINARY_DIR})

# Define executable
add_executable(SimpleProtobuf
    src/main.cpp
    src/QueueMessage.pb.cc
)

target_link_libraries(SimpleProtobuf
    protobuf::libprotobuf
    absl::base
    absl::synchronization
)