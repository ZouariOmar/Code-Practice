/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-17
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1622/A codeforces @endlink
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
    std::cin >> sticks[0] >> sticks[1] >> sticks[2];
    std::sort(sticks, sticks + 3);
    std::cout << ((sticks[0] == sticks[1] && sticks[2] % 2 == 0) ||
                          (sticks[1] == sticks[2] && sticks[0] % 2 == 0) ||
                          (sticks[0] + sticks[1] == sticks[2])
                      ? "YES"
                      : "NO")
              << std::endl;
  }
}