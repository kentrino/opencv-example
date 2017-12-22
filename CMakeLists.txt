cmake_minimum_required(VERSION 2.8)

add_executable(opencv_example src/main.cc)
project(opencv_example)

SET("OpenCV_DIR" "deps/opencv/build")

find_package(OpenCV 3.4.0 REQUIRED)

if(OpenCV_FOUND)
  include_directories(${OpenCV_INCLUDE_DIRS})
  target_link_libraries(opencv_example ${OpenCV_LIBS})
endif(OpenCV_FOUND)
