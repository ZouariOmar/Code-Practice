/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-18
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/581/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> socks.first >> socks.second;
}

/**
 * @brief Print the solution in the console
 * @details Print two space-separated integers — the maximum number of days when Vasya can wear different socks
 * and the number of days when he can wear the same socks until he either runs out of socks or cannot make a
 * single pair from the socks he's got.
 */
void Solution::solve() {
  cout << min(socks.first, socks.second) << " " << abs(socks.first - socks.second) / 2 << endl;
}