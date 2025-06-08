#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <stdexcept>
#include <vector>

namespace core {
class Matrix {
 public:
  explicit Matrix(std::vector<std::vector<char>> plaintext);
  explicit Matrix(std::string plaintext_str);

  const char& At(int row, int col);

  std::vector<std::vector<char>> GetPlaintext() { return plaintext_; }

 private:
  int rows_size_{3};  // base 0
  int cols_size_{3};  // base 0
  std::vector<std::vector<char>> plaintext_;
};
}  // namespace core
#endif  // MYCLASS_H
