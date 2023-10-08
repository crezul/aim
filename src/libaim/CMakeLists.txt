add_library(libaim example.cpp  core/theApp.cpp)

target_include_directories(libaim PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
