/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-03
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1335/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> t;
}

/**
 * @brief Print result in console
 */
void Solution::solve() {
  while (t--) {
    cin >> n;
    if (n < 3)
      cout << 0 << endl;
    else
      cout << (n - 1) / 2 << endl;
  }
}

/**
 * @brief ### Set the up io test function
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif  // __TEST__
}