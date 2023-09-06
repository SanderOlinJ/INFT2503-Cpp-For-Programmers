cmake_minimum_required(VERSION 3.24)
project(task_b)

set(CMAKE_CXX_STANDARD 17)

add_executable(task_b main.cpp)

# Set the working directory for the executable to the source directory
set_target_properties(task_b PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}"
        )