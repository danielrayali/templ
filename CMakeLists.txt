cmake_minimum_required (VERSION 3.10.2)

project (templ)

if (UNIX)
  # Need to set this explicitly for gcc/g++
  SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -std=c++11")
endif ()

include_directories (include)
add_subdirectory (include)
add_subdirectory (src)
add_subdirectory (test)
add_subdirectory (bin)

set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "1")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_SOURCE_GENERATOR "TBZ2")
SET(CPACK_GENERATOR "DEB")
SET(CPACK_DEBIAN_PACKAGE_MAINTAINER "Daniel Ali") #required
set(CPACK_SOURCE_PACKAGE_FILE_NAME
  "${CMAKE_PROJECT_NAME}-${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH}")
set(CPACK_SOURCE_IGNORE_FILES
  "/build/;/.bzr/;~$;${CPACK_SOURCE_IGNORE_FILES}")
include(CPack)

add_custom_target(dist COMMAND ${CMAKE_MAKE_PROGRAM} package_source)

