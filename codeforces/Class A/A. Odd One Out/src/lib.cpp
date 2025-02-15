/**
 * @file lib.cpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-26
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1915/A codeForce @endlink
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
 * @brief ### Print the solution in console
 */
void Solution::solve() {
  while (t--) {
    cin >> a >> b >> c;
    (a == b) ? cout << c << endl : (a == c) ? cout << b << endl : cout << a << endl; 
  }
}