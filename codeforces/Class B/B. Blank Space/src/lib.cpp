/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-22
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1829/B codeforces @endlink
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
    short long_consecutive_zeros{-1}, long_tmp_consecutive_zeros{0};
    short nbr;
    while (n--)
      cin >> nbr, (nbr) ? long_consecutive_zeros = max(long_consecutive_zeros, long_tmp_consecutive_zeros), long_tmp_consecutive_zeros = 0 : long_tmp_consecutive_zeros++;
    cout << max(long_consecutive_zeros, long_tmp_consecutive_zeros) << endl;
  }
}