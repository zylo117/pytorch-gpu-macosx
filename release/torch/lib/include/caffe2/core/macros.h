// Automatically generated header file for caffe2 macros. These
// macros are used to build the Caffe2 binary, and if you are
// building a dependent library, they will need to be set as well
// for your program to link correctly.

#pragma once

// Caffe2 version. The plan is to increment the minor version every other week
// as a track point for bugs, until we find a proper versioning cycle.

#define CAFFE2_VERSION_MAJOR 0
#define CAFFE2_VERSION_MINOR 8
#define CAFFE2_VERSION_PATCH 2
#define CAFFE2_GIT_VERSION ""

static_assert(
    CAFFE2_VERSION_MINOR < 100,
    "Programming error: you set a minor version that is too big.");
static_assert(
    CAFFE2_VERSION_PATCH < 100,
    "Programming error: you set a patch version that is too big.");

#define CAFFE2_VERSION                                         \
  (CAFFE2_VERSION_MAJOR * 10000 + CAFFE2_VERSION_MINOR * 100 + \
   CAFFE2_VERSION_PATCH)

/* #undef CAFFE2_ANDROID */
#define CAFFE2_BUILD_SHARED_LIBS
/* #undef CAFFE2_FORCE_FALLBACK_CUDA_MPI */
/* #undef CAFFE2_HAS_MKL_DNN */
/* #undef CAFFE2_HAS_MKL_SGEMM_PACK */
#define CAFFE2_PERF_WITH_AVX
#define CAFFE2_PERF_WITH_AVX2
/* #undef CAFFE2_THREADPOOL_MAIN_IMBALANCE */
/* #undef CAFFE2_THREADPOOL_STATS */
#define CAFFE2_UNIQUE_LONG_TYPEMETA
#define CAFFE2_USE_EXCEPTION_PTR
/* #undef CAFFE2_USE_ACCELERATE */
#define CAFFE2_USE_EIGEN_FOR_BLAS
/* #undef CAFFE2_USE_FBCODE */
/* #undef CAFFE2_USE_GFLAGS */
/* #undef CAFFE2_USE_GOOGLE_GLOG */
/* #undef CAFFE2_USE_LITE_PROTO */
/* #undef CAFFE2_USE_MKL */
/* #undef CAFFE2_USE_IDEEP */
/* #undef CAFFE2_USE_NVTX */
/* #undef CAFFE2_USE_TRT */
#define CAFFE2_DISABLE_NUMA

#ifndef EIGEN_MPL2_ONLY
/* #undef EIGEN_MPL2_ONLY */
#endif

// Useful build settings that are recorded in the compiled binary
#define CAFFE2_BUILD_STRINGS { \
  {"GIT_VERSION", ""}, \
  {"CXX_FLAGS", "  -msse4.1 -msse4.2   --std=c++11  -Wno-deprecated -fvisibility-inlines-hidden -Wno-deprecated-declarations -O2 -fPIC -Wno-narrowing -Wno-invalid-partial-specialization"}, \
  {"BUILD_TYPE", "Release"}, \
  {"BLAS", "MKL"}, \
  {"USE_CUDA", "1"}, \
  {"USE_NCCL", "OFF"}, \
  {"USE_MPI", "OFF"}, \
  {"USE_GFLAGS", "OFF"}, \
  {"USE_GLOG", "OFF"}, \
  {"USE_GLOO", ""}, \
  {"USE_NNPACK", "1"}, \
  {"USE_OPENMP", "OFF"}, \
  {"FORCE_FALLBACK_CUDA_MPI", ""}, \
  {"HAS_MKL_DNN", ""}, \
  {"HAS_MKL_SGEMM_PACK", ""}, \
  {"PERF_WITH_AVX", "1"}, \
  {"PERF_WITH_AVX2", "1"}, \
  {"UNIQUE_LONG_TYPEMETA", "1"}, \
  {"USE_EXCEPTION_PTR", "1"}, \
  {"USE_ACCELERATE", ""}, \
  {"USE_EIGEN_FOR_BLAS", "ON"}, \
  {"USE_LITE_PROTO", ""}, \
  {"USE_MKL", ""}, \
  {"USE_NVTX", ""}, \
  {"USE_TRT", ""}, \
  {"DISABLE_NUMA", "1"}, \
}
