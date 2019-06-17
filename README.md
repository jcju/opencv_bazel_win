# opencv_bazel
Building OpenCV project with Bazel

# Dependencies

* Requires Bazel (https://www.bazel.build/)
* OpenCV 3.1

# How to

* In the WORKSPACE file, change the path of the OpenCV to your system path. 
* Build the project using `bazel build //main:main`
* To run the demo file `bazel-bin/main/main /path/to/image`
