/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-18
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/581/A codeForce @endlink
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
  pair<int, int> socks;  // Red socks and blue socks : 1 ≤ a, b ≤ 100

 public:
  Solution();
  void solve();
};  // Solution class

#endif