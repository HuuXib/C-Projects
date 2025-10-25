cmake_minimum_required(VERSION 3.20)
project(CarExample LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/zajecia3_przyklad_implementacji_tego_gowna)

add_library(car STATIC
    ${SRC_DIR}/car.cpp
)
target_include_directories(car PUBLIC
    ${SRC_DIR}
)

add_executable(CarApp
    ${SRC_DIR}/main.cpp
)

target_link_libraries(CarApp PRIVATE car)
