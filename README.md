# 1. build OpenCV
```bash
$ git submodule update --init --recursive
$ cd deps/opencv
$ mkdir build
$ cd build
$ cmake -DWITH_QT=OFF -DWITH_OPENGL=ON -DWITH_VTK=OFF -DWITH_CUDA=OFF -DWITH_OPENEXR=OFF -DWITH_WEBP=OFF -DBUILD_PROTOBUF=OFF -DBUILD_opencv_dnn=OFF -DBUILD_opencv_legacy=OFF -DBUILD_PERF_TESTS=OFF -DBUILD_DOCS=OFF -DBUILD_TESTS=OFF -DBUILD_EXAMPLES=OFF -DENABLE_FAST_MATH=1 -DCMAKE_BUILD_TYPE=RELEASE ..
$ make
```

# 2. build this project
```bash
$ cd .
$ mkdir build
$ cd build
$ cmake ..
$ make
```
