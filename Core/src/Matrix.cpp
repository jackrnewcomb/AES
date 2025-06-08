#include "include/Matrix.h"

namespace core {
Matrix::Matrix(std::vector<std::vector<char>> plaintext) {
  plaintext_ = plaintext;
}

Matrix::Matrix(std::string plaintext_str) {
  // for now, enforce 16 characters for 128 bytes
  if (plaintext_str.size() != 16) {
    throw std::runtime_error("Inputted plaintext string not 16 characters.");
  }

  for (int row = 0; row < 16; row += 4) {
    std::vector<char> new_row;
    for (size_t col = 0; col < 4; ++col) {
      new_row.push_back(plaintext_str.at(row + col));
    }
    plaintext_.push_back(new_row);
  }
}

const char& Matrix::At(int row, int col) {
  if (row > rows_size_ || col > cols_size_) {
    throw std::runtime_error("Requested column or row out of bounds.");
  }
  return plaintext_.at(row).at(col);
}
}  // namespace core
