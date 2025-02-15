/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-11
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1433/A codeforce @endlink
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
 * @brief ### For each test case, print the answer: how many digits our character pressed in total.
 */
inline void Solution::solve() {
  while (t--) {
    cin >> x;
    size_t len{x.length()};
    int f = x[0] - '0' - 1,
        res = f * 10;
    for (int i{1}; i <= len; ++i)
      res += i;
    cout << res << endl;
  }
}