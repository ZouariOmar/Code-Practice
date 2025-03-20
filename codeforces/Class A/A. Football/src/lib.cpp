/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-09
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/96/A codeforces @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 *
 * @class Solution
 */
Solution::Solution()
    : zeros("0000000"), ones("1111111") {
  std::cin >> s;
}

/**
 * @brief ### Print solution in console
 *
 * @class Solution
 */
void Solution::solve() {
  (s.find(zeros) != std::string::npos || s.find(ones) != std::string::npos) ? std::cout << "YES\n" : std::cout << "NO\n";
}