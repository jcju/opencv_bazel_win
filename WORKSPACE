new_local_repository(
    name = "opencv_install_path",
    path = "C:\\opencv\\build",         # add your OpenCV path here
    build_file = "opencv.BUILD",
)

# Another example:
# add C libraries in Bazel, without creating *.BUILD file

new_local_repository(
    name = "tensorflow_c_win",
    path = "C:\\tensorflow",            # add the path of external library here
    build_file_content = """
cc_library(
    name = "tf",
    hdrs = glob(["include/tensorflow/c/c_api.h"]),
    includes = ["include"],
    visibility = ["//visibility:public"], 
    linkstatic = 1,
)
    """
)
