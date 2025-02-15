/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-10
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/155/A codeForce @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using namespace std;

//? Function prototype declaration part
void setup_io_test();

//? Class prototype declaration part

class Solution {
 private:
  size_t len;
  pair<int, int> viewer;  // viewer::first: Max Number and viewer::second: Min Number
  int holder, res;

 public:
  Solution();
  void solve();
};  // Solution class

#endif