cmake_minimum_required(VERSION 3.8)
project(Bookstore)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

set(SOURCE_FILES PersonNode.cpp PersonNode.h
        PersonQueue.inl PersonQueue.h book.cpp book.h inventory.cpp
        inventory.h Queue.h main.cpp bookList.cpp bookList.h tester.cpp tester.h)

add_executable(Bookstore ${SOURCE_FILES})
