/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-01
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1985/A codeforce @endlink
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
 * @brief ### Print the solution into console
 */
void Solution::solve() {
  while (t--) {
    cin >> a >> b;
    swap(a[0], b[0]);
    cout << a << " " << b << endl;
  }
}