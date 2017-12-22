cmake_minimum_required(VERSION 2.8)

add_executable(opencv_example src/main.cc)
project(opencv_example)

# TODO: I want to create CMakeLists.txt which can build whole project at once.
# add_definitions(-DWITH_QT OFF)
# add_definitions(-DWITH_OPENGL ON)
# add_definitions(-DWITH_VTK OFF)
# add_definitions(-DWITH_CUDA OFF)
# add_definitions(-DWITH_OPENEXR OFF)
# add_definitions(-DWITH_WEBP OFF)
# add_definitions(-DBUILD_PROTOBUF OFF)
# add_definitions(-DBUILD_opencv_dnn OFF)
# add_definitions(-DBUILD_opencv_legacy OFF)
# add_definitions(-DBUILD_PERF_TESTS OFF)
# add_definitions(-DBUILD_DOCS OFF)
# add_definitions(-DBUILD_TESTS OFF)
# add_definitions(-DBUILD_EXAMPLES OFF)
# add_definitions(-DENABLE_FAST_MATH 1)
# add_definitions(-DCMAKE_BUILD_TYPE RELEASE)

SET("OpenCV_DIR" "deps/opencv/build")

find_package(OpenCV 3.4.0 REQUIRED)

if(OpenCV_FOUND)
  include_directories(${OpenCV_INCLUDE_DIRS})
  target_link_libraries(opencv_example ${OpenCV_LIBS})
endif(OpenCV_FOUND)
