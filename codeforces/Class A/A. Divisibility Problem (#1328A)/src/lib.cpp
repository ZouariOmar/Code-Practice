/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      21-09-2024
 * @link      https://codeforces.com/problemset/problem/1328/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> t;
}

/**
 * @brief ### For each t - Print the minimum number of moves you need to do in order to make a divisible by b.
 */
void Solution::solve() {
  while (t--) {
    cin >> pr.first >> pr.second;
    int subRes = pr.first % pr.second;
    if (!subRes)
      cout << 0 << endl;
    else
      cout << pr.second - pr.first % pr.second << endl;
  }
}

/**
 * @brief ### Set the up io test function
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif
}