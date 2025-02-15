/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      06-09-2024
 * @link      https://codeforces.com/problemset/problem/344/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> n;

  arr.resize(n);

  // Set the data
  for (size_t i{}; i < n; i++)
    cin >> arr[i];
}

void Solution::solve() {
  int res{1};

  for (size_t i{}; i < n - 1; i++)
    if (arr[i] != arr[i + 1]) res++;

  cout << res << endl;
}

/**
 * @brief ### Set the up io test function
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif  // __TEST__
}