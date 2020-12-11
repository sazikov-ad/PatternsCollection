load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "rules_cc",
    sha256 = "d0c573b94a6ef20ef6ff20154a23d0efcb409fb0e1ff0979cec318dfe42f0cdd",
    strip_prefix = "rules_cc-b1c40e1de81913a3c40e5948f78719c28152486d",
    urls = [
        "https://github.com/bazelbuild/rules_cc/archive/b1c40e1de81913a3c40e5948f78719c28152486d.zip",
    ],
)

http_archive(
    name = "inicpp",
    build_file = "@//external:BUILD.inicpp",
    sha256 = "70249842cddbc5ba7796e886a77d07336914ec1ce8071a814769f5546a7ece7a",
    strip_prefix = "inicpp-dc6907704ac9e082761fa3900babf8e1b8a0aa1f",
    urls = [
        "https://github.com/SemaiCZE/inicpp/archive/dc6907704ac9e082761fa3900babf8e1b8a0aa1f.zip",
    ],
)

http_archive(
    name = "tgbot",
    build_file = "@//external:BUILD.tgbot",
    sha256 = "50ab8f3b241ab9a6ef97caeee38318dc1a1ab7bba7680451285b5daf7b3922d2",
    strip_prefix = "tgbot-cpp-9dae1b4ae78218a7ebd341f8b2952fe26affdf74",
    urls = ["https://github.com/reo7sp/tgbot-cpp/archive/9dae1b4ae78218a7ebd341f8b2952fe26affdf74.zip"],
)

http_archive(
    name = "vmime",
    build_file = "@//external:BUILD.vmime",
    patch_args = ["-p1"],
    patches = ["vmime_build.patch"],
    sha256 = "1536cf24196372d72d0e260c6a99b16f434f240fcf52602f72bdd504373d811b",
    strip_prefix = "vmime-6c4bd0dda9eb1278b05fbf9a5b8abbc69250e78f",
    urls = ["https://github.com/kisli/vmime/archive/6c4bd0dda9eb1278b05fbf9a5b8abbc69250e78f.zip"],
)
