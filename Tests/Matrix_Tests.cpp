#define BOOST_TEST_MODULE MatrixTestSuite
#include "../Core/include/Matrix.h"                                 // fix later
#include "C:/local/boost_1_88_0/boost/test/included/unit_test.hpp"  // fix this later

// Test the std::vector<std::vector<char>> constructor
BOOST_AUTO_TEST_CASE(constructor_test1) {
  std::vector<std::vector<char>> test_input{
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

  core::Matrix matrix(test_input);

  BOOST_TEST(matrix.GetPlaintext() == test_input);
}

// Test the std::string constructor
BOOST_AUTO_TEST_CASE(constructor_test2) {
  // Define a 16 character input
  std::string test_input{"abcdefghijklmnop"};

  core::Matrix matrix(test_input);

  const auto& plaintext_out = matrix.GetPlaintext();

  BOOST_TEST(plaintext_out.at(0).at(0) == test_input.at(0));
}

// Test the At() method
BOOST_AUTO_TEST_CASE(At_test) {
  // Define a 16 character input
  std::string test_input{"abcdefghijklmnop"};

  core::Matrix matrix(test_input);

  BOOST_TEST(matrix.At(0, 1) == test_input.at(1));
}
