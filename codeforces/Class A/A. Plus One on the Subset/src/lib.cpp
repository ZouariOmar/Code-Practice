/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-18
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1624/A codeforce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution()
    : pr({INT_MAX, INT_MIN}) {
  cin >> t;
}

/**
 * @brief ### Print solution in console
 */
void Solution::solve() {
  while (t--) {
    cin >> n;
    while (n--) {
      long long int holder;
      cin >> holder;
      pr = {min(pr.first, holder), max(pr.second, holder)};
    }
    cout << pr.second - pr.first << endl;
    pr = {INT_MAX, INT_MIN}; // Reset pair for the next tests
  }
}