/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-29
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1676/A codeForce @endlink
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
  size_t t;    // Number of test cases (1 ≤ t ≤ 10^3)

 public:
  Solution();    // Solution constructor
  void solve();  // Main class function
};  // Solution class

#endif  // __INC_HPP__