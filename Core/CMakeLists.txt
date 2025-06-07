add_library(Core
    src/aes.cpp
    include/aes.h
)

target_include_directories(Core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})