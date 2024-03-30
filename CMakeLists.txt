cmake_minimum_required(VERSION 3.23.2)
project(WinMicrophone)

set(CMAKE_SOURCE_DIR resource)
set(CMAKE_CXX_STANDARD 14)

# Add the resource object file to the executable target
add_executable(WinMicrophone WIN32 main.cpp Microphone.cpp Microphone.h logo.rc)
