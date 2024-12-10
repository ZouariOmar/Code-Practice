/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-21
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/432/A codeForce @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part
//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class Solution {
 private:
  const char grp_nbr = 3;          // Each team must consist of exactly three people
  const char max_participate = 5;  // Each person can participate in the world championship at most 5 times.
  short n,                         // 1 ≤ n ≤ 2000 - number of participant
      k,                           // 1 ≤ k ≤ 5 - number of participation
      sum;                         // Number of valid persons that kan participate after k championship
 public:
  Solution();
  void solve();
};  // Solution class

#endif  // __INC_HPP__