cmake_minimum_required(VERSION 3.10)

cmake_policy(SET CMP0012 NEW)

FIND_PACKAGE(OpenCV 4.2.0 REQUIRED)

MESSAGE("OpenCV version : ${OpenCV_VERSION}")

project(OpenCV_CPP)

set(ASSETS_PATH "${PROJECT_SOURCE_DIR}/assets")

include_directories(${OpenCV_INCLUDE_DIRS})

link_directories(${OpenCV_LIB_DIR})

add_subdirectory(basics)
add_subdirectory(config)
