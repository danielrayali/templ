cmake_minimum_required (VERSION 3.16.3)

project (templ)

if (UNIX)
  # Need to set this explicitly for gcc/g++
  SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -std=c++11")
endif ()

include_directories (include)
add_subdirectory (include)
add_subdirectory (src)
enable_testing ()
add_subdirectory (test)
add_subdirectory (bin)

set(DEB_PACKAGE_VERSION "0")
set(DEB_PACKAGE_ARCH "amd64")

set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "1")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_SOURCE_GENERATOR "TBZ2")
set(CPACK_GENERATOR "DEB")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Daniel Ali") #required
set(CPACK_SOURCE_PACKAGE_FILE_NAME
  "${CMAKE_PROJECT_NAME}-${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH}")
#  "${CMAKE_PROJECT_NAME}-${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH}-${DEB_PACKAGE_VERSION}_${DEB_PACKAGE_ARCH}")
set(CPACK_SOURCE_IGNORE_FILES
  "/build/;/.bzr/;~$;${CPACK_SOURCE_IGNORE_FILES}")
include(CPack)
add_custom_target (dist COMMAND ${CMAKE_MAKE_PROGRAM} package_source)
add_custom_target (deb COMMAND cpack)

# Add clang-format support through the "make format" target
file (GLOB templ_sources
    LIST_DIRECTORIES false
    src/*.hpp src/*.cpp
    include/*.hpp
    test/*.hpp test/*.cpp)
find_program(${PROJECT_NAME}_CLANG_FORMAT_BINARY clang-format)
add_custom_target (format
    COMMAND ${${PROJECT_NAME}_CLANG_FORMAT_BINARY}
    -i ${templ_sources})

