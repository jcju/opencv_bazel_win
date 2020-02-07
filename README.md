[![Build Status](https://img.shields.io/badge/build%20-passing-brightgreen.svg)](https://github.com/jcju/opencv_bazel_win)


# Build OpenCV of C++ with Bazel on Windows
A sample OpenCV C++ project demo built with Bazel on Windows.

* Acknowledgement to [@Kristina & Rick Smith](https://stackoverflow.com/a/35024014).

## Dependencies

* Bazel 0.23.0 or later ([https://www.bazel.build/](https://www.bazel.build/))
* OpenCV 2.4.x or later ([https://opencv.org/](https://opencv.org/))

## Install

1. Make sure OpenCV path is in your System Environment Variables.
2. In the WORKSPACE file, change the value of "path" to the OpenCV install path. For example:
```
new_local_repository(
    name = "opencv_install_path",
    path = "C:\\opencv\\build",         # add your OpenCV path here
    build_file = "opencv.BUILD",
)
```
3. In the opencv.BUILD file, locate the OpenCV libraries in "srcs" according to your C++ complier version:
  * vc16 = Visual Studio 2019
  * vc15 = Visual Studio 2017
  * vc14 = Visual Studio 2015
  * vc12 = Visual Studio 2013
```  
  cc_library(
    name = "opencv_rule",
    srcs = glob(["x64/vc14/lib/*.lib"]),  # the lib location, under your OpenCV path
    hdrs = glob(["include/**/*.hpp",
                 "include/**/*.h"]),
    includes = ["include"],
    visibility = ["//visibility:public"], 
    linkstatic = 1,
)
```
## Usage
Build the project:
```
bazel build //src:main
```

Run the binary: 
```
\bazel-bin\src\main.exe
```
