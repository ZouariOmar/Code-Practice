/**
 * @file lib.cpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-08
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/9/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> yw.first >> yw.second;
}

/**
 * @brief ### Print the solution in console
 */
void Solution::solve() {
  int _max = max(yw.first, yw.second);
  int favorable_outcomes = MAX_DIE - _max + 1;
  int total_outcomes = MAX_DIE;

  // Simplify the fraction
  int gcd = std::gcd(favorable_outcomes, total_outcomes);
  favorable_outcomes /= gcd;
  total_outcomes /= gcd;

  cout << favorable_outcomes << "/" << total_outcomes << endl;
}