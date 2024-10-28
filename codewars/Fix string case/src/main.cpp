/**
 * @file main.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-28
 * @copyright Copyright (c) 2024
 * @link https://www.codewars.com/kata/5b180e9fedaa564a7000009a/train/cpp codeWars @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main() {
  cout << solve("HELLo") << endl;

  return 0;
}

/**
 * @brief ### convert string to either lowercase only or uppercase only based on:
 * *
 * - #### Make as few changes as possible.
 * *
 * - #### If the string contains equal number of uppercase and lowercase letters, convert the string to lowercase.
 * @param str const string &
 * @return string
 */
string solve(const string &str) {
  size_t len{str.length()};                                            // Sizeof str string
  string res(len, '\0');                                               // Result string (upper/lower str)
  int lower_count = std::count_if(str.begin(), str.end(), ::islower);  // Count lowercase characters
  int upper_count = len - lower_count;                                 // Count uppercase characters
  transform(str.begin(), str.end(), res.begin(), (lower_count >= upper_count) ? ::tolower : ::toupper);
  return res;
}