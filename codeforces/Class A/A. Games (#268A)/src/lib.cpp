/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-01
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/268/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> n;
  for (size_t i{}; i < n; i++) {
    short t1, t2;
    cin >> t1 >> t2;
    home_teams.push_back(t1);
    guest_teams.push_back(t2);
  }
}

/**
 * @brief ### Print the solution in the console
 */
void Solution::solve() {
  int res{};
  for (short it : guest_teams)
    res += count(home_teams.begin(), home_teams.end(), it);
  cout << res << endl;
}

/**
 * @brief ### Set the up io test function
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif
}