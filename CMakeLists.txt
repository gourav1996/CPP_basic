cmake_minimum_required(VERSION 3.1)
project(opencv_example)

# Include openCV
find_package(OpenCV 4 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(backgroundSub-app backgroundSub.cpp)
target_link_libraries(backgroundSub-app ${OpenCV_LIBS})
