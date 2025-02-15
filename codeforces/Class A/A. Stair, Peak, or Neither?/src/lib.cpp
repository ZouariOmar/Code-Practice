/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-06
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1950/A codeforce @endlink
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
    cin >> arr[0] >> arr[1] >> arr[2];
    if (arr[0] < arr[1] && arr[1] < arr[2])
      cout << "STAIR" << endl;
    else if (arr[0] < arr[1] && arr[1] > arr[2])
      cout << "PEAK" << endl;
    else
      cout << "NONE" << endl;
  }
}