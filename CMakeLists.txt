cmake_minimum_required(VERSION 3.6)
project(CTCI_6th_Edition)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES "main.cpp" "main.cpp" "Arrays and Strings/Strings.cpp" "Arrays and Strings/Strings.h" "Node.h" "Linked Lists/LinkedList.cpp" "Linked Lists/LinkedList.h" "Stacks and Queues/Stack.cpp" "Stacks and Queues/Stack.h" "Stacks and Queues/Queue.cpp" "Stacks and Queues/Queue.h" "Stacks and Queues/StackWithMin.cpp" "Stacks and Queues/StackWithMin.h" "Stacks and Queues/SetOfStacks.cpp" "Stacks and Queues/SetOfStacks.h" "Stacks and Queues/MyQueue.cpp" "Stacks and Queues/MyQueue.h" "Stacks and Queues/AnimalQueue.cpp" "Stacks and Queues/AnimalQueue.h")
add_executable(CTCI_6th_Edition ${SOURCE_FILES})