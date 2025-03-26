/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-26
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1633/A codeforces @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @fn    Solution::Solution()
 * @brief Construct a new Solution::Solution object
 */
Solution::Solution() {
  std::cin >> t;
}

/**
 * @fn     Solution::solve()
 * @brief  Print solution in console
 * @return void
 */
void Solution::solve() {
  while (t--) {
    std::cin >> n;
    size_t len = n.size(), mod(0);
    for (const char &c : n)
      mod = 10 * mod + (c - '0'), mod %= 7;
    n[len - 1] = (n[len - 1] >= (mod + '0')) ? (n[len - 1] - mod) : (n[len - 1] + 7 - mod);
    std::cout << n << std::endl;
  }
}