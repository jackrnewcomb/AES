add_executable(Tests
    Matrix_Tests.cpp
)

set(BOOST_ROOT "C:/local")
set(Boost_INCLUDE_DIR "C:/local/boost_1_88_0")

find_package(Boost REQUIRED COMPONENTS unit_test_framework)

target_link_libraries(Tests PRIVATE Core Boost::unit_test_framework)
