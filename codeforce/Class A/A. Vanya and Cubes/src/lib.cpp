/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-25
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/492/A codeforce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> n;
}

/**
 * @brief ### Print the maximum possible height of the pyramid in the single line
 */
inline void Solution::solve() {
  int cnt = 0, i = 1, m = 1;

  while (m <= n) {
    m = ((i * i) + i) / 2;
    if (m > n)
      break;
    n = n - m;
    cnt++, i++;
  }

  cout << cnt << endl;
}