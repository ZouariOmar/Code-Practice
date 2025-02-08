/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-08
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1899/A codeforces @endlink
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
 * @brief ### Print solutions on console
 */
void Solution::solve() {
  while (t--) {
    cin >> n;
    short rest = n % 3;
    (rest == 1 || rest == 2) ? cout << "First" << endl : cout << "Second" << endl;
  }
}