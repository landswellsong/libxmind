project(libxmind)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/modules")
find_package(LibZip REQUIRED)
find_package(ZLIB REQUIRED)
find_package(LibXml2 REQUIRED)

add_executable(mockup examples/mockup.c)
target_link_libraries(mockup ${LIBZIP_LIBRARY})