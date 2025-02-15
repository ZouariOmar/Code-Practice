/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-17
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1722/A codeforce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution()
    : pattern("Timru") {
  cin >> t;
}

/**
 * @brief ### Print the solution in console
 */
void Solution::solve() {
  while (t--) {
    cin >> n, cin >> s;
    sort(s.begin(), s.end());
    (s == pattern) ? cout << "YES" << endl : cout << "NO" << endl;
  }
}