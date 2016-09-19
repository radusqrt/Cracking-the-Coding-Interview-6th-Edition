cmake_minimum_required(VERSION 3.6)
project(CTCI_6th_Edition)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES "main.cpp" "main.cpp" "Arrays and Strings/Strings.cpp" "Arrays and Strings/Strings.h" "Linked Lists/Node.h" "Linked Lists/LinkedList.cpp" "Linked Lists/LinkedList.h")
add_executable(CTCI_6th_Edition ${SOURCE_FILES})