/**
 * @file lib.cpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-28
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1367/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> t;
}

/**
 * @brief ### Print the solution in console
 */
void Solution::solve() {
  while (t--) {
    cin >> b;
    size_t len{b.size()};
    if (len <= 2) {
      cout << b << endl;
      continue;
    }
    string a;  // Decrypted msg
    a.push_back(b[0]);
    for (size_t i{1}; i < len; i += 2)
      a.push_back(b[i]);
    cout << a << endl;
  }
}