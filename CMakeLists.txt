cmake_minimum_required(VERSION 3.27)

project(SlaveRepo
        VERSION 2024.07.03
        DESCRIPTION "SlaveRepo"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CXX_STANDARD_REQUIRED ON)

add_library(slave SHARED)
target_sources(slave
    PRIVATE slave.cpp)

target_include_directories(slave
  PUBLIC
  $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>)

