cmake_minimum_required (VERSION 3.12)
project (HDF5_TOOLS C)

add_subdirectory (lib)

#-- Add the test sources
add_subdirectory (src)

#-- Add the tests
if (BUILD_TESTING)
  add_subdirectory (test)
  add_subdirectory (libtest)
endif ()
