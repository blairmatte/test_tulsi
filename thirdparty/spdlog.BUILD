cc_library(
    name = "spdlog",
    visibility = [
        "//visibility:public",
    ],
    hdrs = glob([
        "include/**/*.h",
        "include/**/*.cc",
    ]),
    includes = [
        "include",
    ],
    copts = [
        "-std=c++14",
    ],
    defines = [
        "SPDLOG_DISABLE_DEFAULT_LOGGER",
    ],
)
