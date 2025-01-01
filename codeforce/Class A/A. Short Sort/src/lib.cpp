/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-30
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1873/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> t;
  t -= 48;
}

void Solution::solve() {
  while (t--) {
    cin >> word;
    if (word.find("ca") != string::npos) {
      cout << "NO" << endl;
      continue;
    }
    cout << "YES" << endl;
  }
}

/**
 * @brief Setup i/o test fn
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif // __TEST__
}