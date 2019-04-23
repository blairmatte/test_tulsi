workspace(name = "test_tulsi")

load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository", "new_git_repository")

git_repository(
    name = "bazel_skylib",
    remote = "https://github.com/bazelbuild/bazel-skylib.git",
    tag = "0.7.0",
)

git_repository(
    name = "build_bazel_rules_apple",
    remote = "https://github.com/bazelbuild/rules_apple.git",
    tag = "0.14.0",
)

git_repository(
    name = "build_bazel_rules_swift",
    remote = "https://github.com/bazelbuild/rules_swift.git",
    tag = "0.7.0",
)

new_git_repository(
    name = "com_github_gabime_spdlog",
    remote = "https://github.com/gabime/spdlog.git",
    tag = "v1.3.1",
    build_file = "//:thirdparty/spdlog.BUILD",
)