load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_import", "cc_library")

def cc_shared_library(
        name,
        srcs = [],
        hdrs = [],
        deps = [],
        visibility = None,
        pkg = False,
        pkg_filegroup = False,
        pkg_filegroup_visibility = None,
        **kwargs):
    so_name = "lib" + name + ".so"
    import_target_name = name + "_so_import"

    cc_binary(
        name = so_name,
        srcs = srcs + hdrs,
        deps = deps,
        linkshared = True,
        visibility = visibility,
        **kwargs
    )

    cc_import(
        name = import_target_name,
        shared_library = so_name,
    )

    cc_library(
        name = name,
        hdrs = hdrs,
        visibility = visibility,
        deps = deps + [":" + import_target_name],
    )

    if (pkg):
        native.filegroup(
            name = pkg_filegroup,
            srcs = [":" + so_name],
            visibility = pkg_filegroup_visibility,
        )
