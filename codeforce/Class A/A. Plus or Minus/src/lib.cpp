/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-06
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1807/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp" 

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> t;  // Take number of test cases
}

/**
 * @brief ### Print the answers in console
 */
void Solution::solve() {
  while (t--) {
    short a, b, c;
    cin >> a >> b >> c;
    (a + b == c) ? cout << "+" << endl : cout << "-" << endl;
  }
}