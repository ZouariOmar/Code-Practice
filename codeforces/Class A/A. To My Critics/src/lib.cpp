/**
 * @file lib.cpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-30
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1850/A codeForce @endlink
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
 * @brief Print the solution in console
 */
void Solution::solve() {
  while (t--) {
    cin >> a >> b >> c;
    if (a + b < 10 && a + c < 10 && b + c < 10)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
}