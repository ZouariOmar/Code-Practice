/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-03
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1850/C codeforces @endlink
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
    std::string result;
    for (int i{}; i < __GRID_COLUMN_ROW_SIZE__; i++) {
      std::cin >> buffer;
      for (const char &c : buffer)
        if (c != '.')
          result += c;
    }
    std::cout << result << std::endl;
  }
}

/**
 * @brief Setup i/o fn
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif // __TEST__
}