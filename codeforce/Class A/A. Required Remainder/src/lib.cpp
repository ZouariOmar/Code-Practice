/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-07
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1374/A codeforce @endlink
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
 * @brief ### Print solution in the console
 */
void Solution::solve() {
  while(t--) {
    cin >> x >> y >> n;
    // Compute the maximum m such that m * x + y <= n
    long long m = (n - y) / x;
    long long k = m * x + y;
    cout << k << endl;
  }
}