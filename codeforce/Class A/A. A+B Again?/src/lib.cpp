/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-26
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1999/A codeForces @endlink
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

void Solution::solve() {
  while (t--) {
    cin >> n;
    cout << (n / 10) + (n % 10) << endl;
  }
}