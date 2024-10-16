/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-15
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1742/A codeForce @endlink
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
    cin >> arr[0] >> arr[1] >> arr[2];
    (arr[0] + arr[1] == arr[2] || abs(arr[0] - arr[1]) == arr[2]) ? cout << "YES" << endl : cout << "NO" << endl;
  }
}

/**
 * @brief ### Setup io test function
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif  // __TEST__
}