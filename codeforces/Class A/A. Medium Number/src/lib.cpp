/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-17
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1760/A codeForce @endlink
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
    short arr[3];  // 3 distinct integers
    cin >> arr[0] >> arr[1] >> arr[2];
    short sum = arr[0] + arr[1] + arr[2];
    cout << sum - max(max(arr[0], arr[1]), arr[2]) - min(min(arr[0], arr[1]), arr[2]) << endl;
  }
}