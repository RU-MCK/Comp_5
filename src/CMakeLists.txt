cmake_minimum_required(VERSION 3.24)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable(Comp_5  main.cpp  ${MY_INCLUDE_DIR}/kbd.h  kbd.cpp
                                 ${MY_INCLUDE_DIR}/ram.h  ram.cpp
                                 ${MY_INCLUDE_DIR}/disk.h disk.cpp
                                 ${MY_INCLUDE_DIR}/cpu.h  cpu.cpp
                                 ${MY_INCLUDE_DIR}/gpu.h  gpu.cpp)

target_include_directories(Comp_5 PUBLIC ${MY_INCLUDE_DIR})