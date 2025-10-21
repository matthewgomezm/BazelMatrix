load("@rules_cc//cc:cc_binary.bzl", "cc_binary")

cc_binary(
	name = "matrix",
	srcs = ["matrix.cc"],
	deps = ["@eigen//:eigen"],
	copts = ["-std=c++17"],
)
