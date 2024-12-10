/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-21
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/432/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() : sum(0) {
  cin >> n >> k;
  while (n--) {
    short participant;
    cin >> participant;
    if (participant + k <= max_participate) sum++;
  }
}

/**
 * @brief ### Print the solution in console
 */
void Solution::solve() {
  cout << sum / grp_nbr << endl;
}