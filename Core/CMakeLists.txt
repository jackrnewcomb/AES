add_library(Core
    src/aes.cpp
    src/Matrix.cpp
    include/aes.h
    include/Matrix.h
    include/structs.h
)

target_include_directories(Core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})