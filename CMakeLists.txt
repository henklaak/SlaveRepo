cmake_minimum_required(VERSION 3.27)

project(SlaveRepo
        VERSION 2024.07.03
        DESCRIPTION "SlaveRepo"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CXX_STANDARD_REQUIRED ON)

add_library(slave SHARED)
target_sources(slave
    PRIVATE slave.cpp
    PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/slave.h>)


