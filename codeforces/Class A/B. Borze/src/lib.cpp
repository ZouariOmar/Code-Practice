/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-30
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/32/B codeFore @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 * *
 * - #### Store the Borze alphabet
 */
Solution::Solution() {
  cin >> str;
}

/**
 * @brief #### Print solution in console
 */
void Solution::solve() {
  size_t len{str.size()};  // Sizeof `str`
  string res;

  for (size_t i{}; i < len; ++i) {
    if (i + 1 < len && str[i] == '-') {
      if (str[i + 1] == '.') {  // Number 1
        res.push_back('1');
        i++;
      } else if (str[i + 1] == '-') {  // Number 2
        res.push_back('2');
        i++;
      }
    } else   // Number 0
      res.push_back('0');
  }

  cout << res << endl;  // Print the solution
}