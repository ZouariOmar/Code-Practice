/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-10
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1873/B codeforces @endlink
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
 * @brief ### Print solution in console
 */
void Solution::solve() {
  while (t--) {
    short _min;
    int product{1};
    cin >> n >> _min, n--;
    short holder;
    while (n--) {
      cin >> holder;
      (holder < _min) ? product *= _min, _min = holder : product *= holder;
    }
    cout << product * (_min + 1) << endl;
  }
}

/**
 * @brief ### Setup i/o test fn
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif // __TEST__
}