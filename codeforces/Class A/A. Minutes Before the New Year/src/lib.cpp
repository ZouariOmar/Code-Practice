/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-22
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1283/A leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution()
    : DAY_HOURS(24) {
  cin >> t;
}

/**
 * @brief ### Print solutions in console
 */
inline void Solution::solve() {
  while (t--) {
    cin >> h >> m;
    cout << ((DAY_HOURS - h) * 60) - m << endl;
  }
}