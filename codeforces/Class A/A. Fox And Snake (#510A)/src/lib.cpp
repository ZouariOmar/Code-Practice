/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-05
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/510/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> s.n >> s.m;

  for (size_t i{}; i < s.m; i++) {
    r.push_back('#');
    rr.push_back('.');
    rl.push_back('.');
  }

  rr[s.m - 1] = '#';
  rl[0] = '#';
}

/**
 * @brief ###
 */
void Solution::solve() {
  bool capture{};
  for (size_t i{}; i < s.n; i++) {
    if (i & 1) {
      (capture) ? cout << rl << endl : cout << rr << endl;
      capture = !capture;
    }
    else
      cout << r << endl;
  }
}