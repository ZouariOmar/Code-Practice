/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-22
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1517/A codeforces @endlink
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
    std::cin >> n;
    if (n % 2050) {
      std::cout << -1 << '\n';
      continue;
    }
    long long int div{n / 2050},
        result{};
    while (div) {
      result += div % 10;
      div /= 10;
    }
    std::cout << result << '\n';
  }
}