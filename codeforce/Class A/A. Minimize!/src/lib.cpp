/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-09
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/2009/A codeforce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> t;
}

/**
 * @brief Print solution in console
 */
void Solution::solve() {
  while (t--) {
    cin >> a >> b;
    cout << b - a << endl;
  }
}