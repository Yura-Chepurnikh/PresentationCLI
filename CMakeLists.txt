cmake_minimum_required(VERSION 3.10)

project(PresentationCLI)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(PresentationCLI main.cpp)

target_include_directories(PresentationCLI PUBLIC include)
