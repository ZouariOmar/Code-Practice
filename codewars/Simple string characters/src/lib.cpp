/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-09
 * @copyright Copyright (c) 2024
 * @link https://www.codewars.com/kata/5a29a0898f27f2d9c9000058/train/cpp codeWars @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return a list of ints detailing the count of uppercase letters, lowercase, numbers and special characters (everything else), as follows.
 * @details The order is: uppercase letters, lowercase letters, numbers and special characters.
 * @param s stirng
 * @return vector<int>
 */
vector<int> solve(string s) {
  vector<int> arr(4, 0);
  for (char c : s) {
    if (isalpha(c))
      (isupper(c)) ? arr[0]++ : arr[1]++;
    else if (isdigit(c))
      arr[2]++;
    else
      arr[3]++;
  }
  return arr;
}

/*
* Other Solution
std::vector<int> solve(std::string s) {
  int u = std::count_if(s.begin(), s.end(), ::isupper);
  int l = std::count_if(s.begin(), s.end(), ::islower);
  int d = std::count_if(s.begin(), s.end(), ::isdigit);
  return { u, l, d, (int)s.size() - u - l - d };
}
*/