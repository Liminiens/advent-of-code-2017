cmake_minimum_required(VERSION 3.9)
project(AdventOfCode)

set(CMAKE_CXX_STANDARD 17)

set(FIRST_TASK_SOURCE_FILES "days/first_day.cpp")
add_executable(FirstTask ${FIRST_TASK_SOURCE_FILES})

set(SECOND_TASK_SOURCE_FILES "days/second_day.cpp")
add_executable(SecondTask ${SECOND_TASK_SOURCE_FILES})