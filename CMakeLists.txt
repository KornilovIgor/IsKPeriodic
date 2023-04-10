cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME IsKPeriodic)
project(${PROJECT_NAME})

file(GLOB CPPS "src/*.cpp")

add_executable(${PROJECT_NAME} ${CPPS})