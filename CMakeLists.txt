cmake_minimum_required(VERSION 2.8)

add_executable(opencv_example src/main.cc)
project(opencv_example)

include(ExternalProject)
ExternalProject_Add(OpenCV 
  # deps/src, deps/tmp are generated
  PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/deps
  GIT_REPOSITORY https://github.com/opencv/opencv.git
  GIT_TAG 3.3.1
  GIT_SHALLOW 1
  # build/opencv generated
  SOURCE_DIR opencv
  # build/opencv-build generated
  BINARY_DIR opencv-build
  CMAKE_ARGS
    ${ep_common_args}
    -DWITH_QT:BOOL=FALSE
    -DWITH_OPENGL:BOOL=TRUE
    -DWITH_VTK:BOOL=FALSE
    -DWITH_CUDA:BOOL=FALSE
    -DWITH_OPENEXR:BOOL=FALSE
    -DWITH_WEBP:BOOL=FALSE
    -DBUILD_PROTOBUF:BOOL=FALSE
    -DBUILD_opencv_dnn:BOOL=FALSE
    -DBUILD_opencv_legacy:BOOL=FALSE
    -DBUILD_PERF_TESTS:BOOL=FALSE
    -DBUILD_DOCS:BOOL=FALSE
    -DBUILD_TESTS:BOOL=FALSE
    -DBUILD_EXAMPLES:BOOL=FALSE
    -DENABLE_FAST_MATH:BOOL=TRUE
    -DCMAKE_BUILD_TYPE=RELEASE
)
set(OpenCV_DIR ${CMAKE_BINARY_DIR}/opencv-build)
find_package(OpenCV 3.3.1 REQUIRED)
target_link_libraries(opencv_example ${OpenCV_LIBS})
