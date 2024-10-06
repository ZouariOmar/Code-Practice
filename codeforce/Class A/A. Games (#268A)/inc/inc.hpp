/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-01
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/268/A codeForce @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <algorithm>
#include <iostream>
#include <vector>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part

class Solution {
 private:
  size_t n;
  vector<short> home_teams;
  vector<short> guest_teams;

 public:
  Solution();
  void solve();
};  // Solution class

#endif