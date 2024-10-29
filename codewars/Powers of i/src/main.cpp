/**
 * @file main.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-29
 * @copyright Copyright (c) 2024
 * @link https://www.codewars.com/kata/5a97387e5ee396e70a00016d/train/cpp codeWars @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main() {
  cout << pofi(7) << endl;

  return 0;
}

/**
 * @brief ### Returns `i` to the power of a given non-negative integer in its simplest form, as a string
 * @param n {unsigned}
 * @return string
 */
string pofi(unsigned n) {
  string res;
  if (n & 1)  // The var `n` is odd
    (n / 2 & 1) ? res = "-i" : res = "i";
  else
    (n / 2 & 1) ? res = "-1" : res = "1";
  return res;
}

/*
* Other solution
std::string pofi(unsigned n) {
  return (std::string[]){"1", "i", "-1", "-i"}[n % 4];
}
*/