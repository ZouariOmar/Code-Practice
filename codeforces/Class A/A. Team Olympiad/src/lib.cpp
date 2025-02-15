/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-22
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/490/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    int t;
    cin >> t;
    (t == 1) ? programming.push_back(i) : (t == 2) ? maths.push_back(i)
                                                   : pe.push_back(i);
  }
  w = min(programming.size(), min(maths.size(), pe.size()));
}

/**
 * @brief ### Print the solution in console
 */
void Solution::solve() {
  cout << w << endl;
  for (size_t i{}; i < w; ++i)  // Form the teams
    cout << programming[i] << " " << maths[i] << " " << pe[i] << endl;
}