/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      25-09-2024
 * @link      https://codeforces.com/problemset/problem/144/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution()
    : iMin(-1), iMax(-1) {
  cin >> len;
  int Max{INT_MIN}, Min{INT_MAX};

  for (size_t i{}; i < len; i++) {
    int hld;
    cin >> hld;

    // Update max value and index (for the first occurrence)
    if (hld > Max) {
      Max = hld;
      iMax = i;
    }

    // Update min value and index (for the last occurrence)
    if (hld <= Min) {
      Min = hld;
      iMin = i;
    }
  }
}

/**
 * @brief ### Print the solution in the terminal
 */
void Solution::solve() {
  if (!iMax && iMin == len - 1)
    cout << "0" << endl;
  else {
    int steps = iMax + (len - 1 - iMin);  // Move max to index 0, min to index len-1
    if (iMax > iMin) steps--;             // Overlapping swap correction
    cout << steps << endl;
  }
}

/**
 * @brief Boost the app
 */
void boost() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
}

/**
 * @brief ### Set the up io test function
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif
}