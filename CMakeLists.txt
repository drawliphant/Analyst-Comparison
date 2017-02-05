cmake_minimum_required(VERSION 3.7)
project(AnalystComparison)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp analyst.cpp analyst.h transaction.cpp transaction.h Utils.cpp Utils.h)
add_executable(AnalystComparison ${SOURCE_FILES})