cmake_minimum_required(VERSION 3.10)
project(zlog)

# Use C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${PROJECT_SOURCE_DIR}/include)

# Add executable
add_executable(zlog src/main.cpp)
