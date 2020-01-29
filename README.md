# OpenCV Bazel on Windows
A sample OpenCV project built with Bazel on Windows

* Acknowledgement to [@Kristina & Rick Smith](https://stackoverflow.com/a/35024014).

# Dependencies

* Bazel 0.23.0 or later (https://www.bazel.build/)
* OpenCV 2.4.x or later (https://opencv.org/)

# Instructions

* Make sure OpenCV path is in your System Environment Variables.
* In the WORKSPACE file, change the value of "path" to the OpenCV install path.
* In the opencv.BUILD file, locate the OpenCV libraries in "srcs" according to your complier version:
  * vc16 = Visual Studio 2019
  * vc15 = Visual Studio 2017
  * vc14 = Visual Studio 2015
  * vc12 = Visual Studio 2013
* Build the project: `bazel build //src:main`
* To run the binary: `.\bazel-bin\src\main.exe`

