cc_library(
    name = "fmt",
    visibility = [
        "//visibility:public",
    ],
    srcs = [
        "src/format.cc",
        "src/posix.cc",
    ],
    hdrs = [
        "include/fmt/chrono.h",
        "include/fmt/color.h",
        "include/fmt/core.h",
        "include/fmt/format-inl.h",
        "include/fmt/format.h",
        "include/fmt/locale.h",
        "include/fmt/ostream.h",
        "include/fmt/posix.h",
        "include/fmt/printf.h",
        "include/fmt/time.h",
    ],
    includes = [
        "include",
    ],
    strip_include_prefix = "include",
    copts = [
        "-std=c++14",
    ],
)
