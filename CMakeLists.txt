cmake_minimum_required(VERSION 3.10)
project(AESEncryption)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add subdirectories
add_subdirectory(Core)
add_subdirectory(Encrypt)
add_subdirectory(Decrypt)
add_subdirectory(Tests)