/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-29
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1676/A codeForce @endlink
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
 * @brief ### Print the solution in console
 */
void Solution::solve() {
  while (t--) {
    string nbr;  // Number holder (string format)
    cin >> nbr;
    (nbr[0] + nbr[1] + nbr[2] == nbr[3] + nbr[4] + nbr[5]) ? cout << "YES" << endl : cout << "NO" << endl;
  }
}