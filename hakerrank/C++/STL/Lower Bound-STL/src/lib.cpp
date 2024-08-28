/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      21-08-2024
 * @link      https://www.hackerrank.com/challenges/cpp-lower-bound/problem?isFullScreen=true
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Set the up io test function
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
  // Hold the length of the array vector (arr)
  cin >> len;

  arr.resize(len);

  // Hold the arr data
  for (int i{}; i < len; i++)
    cin >> arr[i];

  // Hold the queries number(s)
  cin >> q;
}

/**
 * @brief 
 * 
 */
void Solution::l_bound() {
  while (q--) {
    int x;
    cin >> x;
    vector<int>::iterator it = lower_bound(arr.begin(), arr.end(), x);

    if (arr[it - arr.begin()] == x)
      cout << "Yes " << it - arr.begin() + 1 << endl;
    else
      cout << "No " << it - arr.begin() + 1 << endl;
  }
}