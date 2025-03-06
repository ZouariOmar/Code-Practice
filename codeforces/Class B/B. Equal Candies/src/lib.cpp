/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-21
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1676/B codeforces @endlink
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
void Solution::solve() {
  while (t--) {
    cin >> n;
    int _min{__INT_MAX__}, sum{}, cpN{n};
    while (cpN--)
      cin >> holder, _min = min(_min, holder), sum += holder;
    cout << sum - _min * n << endl;
  }
}