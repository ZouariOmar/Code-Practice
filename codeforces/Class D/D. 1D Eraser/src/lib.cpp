/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-06
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1873/D codeforces @endlink
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
    std::cin >> n >> k >> s;
    int result{};
    for (int i{}; i < n; i++)
      if (s[i] == 'B')
        i += k - 1, result++;
    std::cout << result << std::endl;
  }
}

/**
 * @brief ### Setup i/o test fn
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif // __TEST__
}