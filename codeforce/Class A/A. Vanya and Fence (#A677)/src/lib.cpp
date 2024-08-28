/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      27-08-2024
 * @link      https://codeforces.com/problemset/problem/677/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Set the up io test object
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif
}

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> n >> h;
  arr.resize(n);
}

void Solution::solve() {
  int upH{}, downH{};
  for (size_t i{}; i < n; i++) {
    cin >> arr[i];
    if (arr[i] > h)
      ++ ++upH;
    else
      downH++;
  }

  cout << upH + downH << endl;
}