/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-25
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1409/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> t;  // Take the number of test cases
}

/**
 * @brief ### Print the solution in the console
 */
void Solution::solve() {
  while (t--) {
    lli a, b;       // 2 integers a and b.
    cin >> a >> b;  // Take the usr input
    lli diff{abs(a - b)};
    cout << (diff / 10) + (diff % 10 != 0) << endl;
  }
}

/**
 * @brief Setup i/o test function
 */
inline void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif  // __TEST__
}