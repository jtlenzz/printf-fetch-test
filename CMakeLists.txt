cmake_minimum_required(VERSION 3.14) # FetchContent_MakeAvailable
project(fetcher)
enable_language(CXX C)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_subdirectory(third-party)
