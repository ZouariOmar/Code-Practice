/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-07
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1791/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution()
    : pattern("codeforces") {
  cin >> t;
}

/**
 * @brief ### Print correct answers in console
 */
void Solution::solve() {
  while (t--) {
    char c;  // Lowercase Latin character
    cin >> c;
    (pattern.find(c) != string::npos) ? cout << "YES" << endl : cout << "NO" << endl;
  }
}