cmake_minimum_required(VERSION 3.5)
project(BitCoinToy)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp BitCoinClient.h BitCoinClient.cpp Transaction.h Transaction.cpp Block.h)
find_package( CRYPTOPP REQUIRED)
add_executable(BitCoinToy ${SOURCE_FILES})

target_link_libraries(
        BitCoinToy
        cryptopp-static
)