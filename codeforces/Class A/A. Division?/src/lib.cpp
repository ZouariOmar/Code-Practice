/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-05
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1669/A codeForce @endlink
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

void Solution::solve() {
  while (t--) {
    int rating;  // −5000 ≤ rating ≤ 5000
    cin >> rating;
    if (rating >= 1900)
      cout << "Division 1" << endl;
    else if (rating >= 1600 && rating <= 1899)
      cout << "Division 2" << endl;
    else if (rating >= 1400 && rating <= 1599)
      cout << "Division 3" << endl;
    else
      cout << "Division 4" << endl;
  }
}