/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-16
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1619/A codeforce @endlink
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
 * @brief ### Print solution in console
 */
inline void Solution::solve() {
  while (t--) {
    cin >> s;
    size_t len{s.size()};
    if (len & 1) {
      cout << "NO" << endl;
      continue;
    }
    if (s.substr(0, len / 2) == s.substr(len / 2, len - 1))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}