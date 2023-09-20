cmake_minimum_required(VERSION 3.5)

project(task-2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(task-2 main.cpp)

find_package(Boost COMPONENTS system REQUIRED)
include_directories(${Boost_INCLUDE_DIR})
target_link_libraries(task-2 ${Boost_LIBRARIES})
