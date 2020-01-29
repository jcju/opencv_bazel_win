cc_library(
    name = "opencv_rule",
    srcs = glob(["x64/vc14/lib/*.lib"]),
    hdrs = glob(["include/**/*.hpp",
                 "include/**/*.h"]),
    includes = ["include"],
    visibility = ["//visibility:public"], 
    linkstatic = 1,
)
