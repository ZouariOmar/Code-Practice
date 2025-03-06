/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-02
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1791/C codeforces @endlink
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
 * @brief ### Print the solution in the console
 *
 * @class Solution
 */
void Solution::solve() {
  while (t--) {
    std::cin >> n >> s;
    short l{}, h = n - 1, res{n};
    while (l < h)
      if (s[l] != s[h])
        l++, h--, res -= 2;
      else
        break;
    std::cout << res << std::endl; // Print result
  }
}

/**
 * @brief ### Setup i/o test object
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif // __TEST__
}