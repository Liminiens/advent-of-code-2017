cmake_minimum_required(VERSION 3.9)
project(AdventOfCode)

set(CMAKE_CXX_STANDARD 17)

set(FIRST_DAY_SOURCE_FILES "days/first_day.cpp")
add_executable(FirstDay ${FIRST_DAY_SOURCE_FILES})

set(SECOND_DAY_SOURCE_FILES "days/second_day.cpp")
add_executable(SecondDay ${SECOND_DAY_SOURCE_FILES})

set(THIRD_DAY_SOURCE_FILES "days/third_day.cpp")
add_executable(ThirdDay ${THIRD_DAY_SOURCE_FILES})