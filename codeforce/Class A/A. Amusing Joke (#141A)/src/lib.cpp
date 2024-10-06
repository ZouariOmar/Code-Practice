/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-06
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/141/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> holder;
  for (char c : holder)
    in[c]++;

  cin >> holder;
  for (char c : holder)
    in[c]++;

  cin >> holder;
  for (char c : holder)
    out[c]++;
}

/**
 * @brief ### Return true, if the letters in the pile could be permuted to make the names of the "New Year and Christmas Men".
 * Otherwise, return false.
 * @return true or true
 */
bool Solution::solve() {
  return in == out;
}