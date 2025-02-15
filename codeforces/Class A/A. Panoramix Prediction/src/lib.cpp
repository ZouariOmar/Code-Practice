/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-05
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/80/A codeforce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> n >> m;
}

/**
 * @brief ### Check if the given integer is prime or not
 * @param x int
 * @return bool
 */
bool Solution::is_prime(int x) {
  double _x{sqrt(x)};
  for (int i{2}; i <= _x; ++i)
    if (x % i == 0)
      return false;
  return true;
}

/**
 * @brief ### Print solution in console
 */
void Solution::solve() {
  int next_n{n + 1};
  while (!is_prime(next_n))
    next_n++;
  (next_n == m) ? cout << "YES" << endl : cout << "NO" << endl; 
}