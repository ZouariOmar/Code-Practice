/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-08
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1971/B codeforces @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 *
 * @class Solution
 */
Solution::Solution() {
  std::cin >> t;
}

/**
 * @brief ### Print solution in console
 *
 * @class Solution
 */
void Solution::solve() {
  while (t--) {
    std::cin >> s;
    std::string s_copy(s);
    for (unsigned short i = s.length() - 1; i > 0; i--)
      if (s[0] != s[i]) {
        std::swap(s_copy[0], s_copy[i]);
        std::cout << "YES\n" + s_copy << std::endl;
        break;
      }
    if (s == s_copy)
      std::cout << "NO" << std::endl;
  }
}