/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-08
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/723/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  prs.resize(3);
  cin >> prs[0] >> prs[1] >> prs[2];
}

/**
 * @brief ### Print the minimum total distance the friends need to travel in order to meet together.
 */
void Solution::solve() {
  sort(prs.begin(), prs.end());
  cout << (prs[2] - prs[1]) + (prs[1] - prs[0]) << endl;
}

/**
 * @brief ### Setup io test function
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif
}