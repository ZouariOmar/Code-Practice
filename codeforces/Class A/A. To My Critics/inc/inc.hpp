/**
 * @file inc.hpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-30
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1850/A codeForce @endlink
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
  short t;        // The number of test cases - 1 ≤ t ≤ 1000
  short a, b, c;  // The three digits 0 ≤ a,b,c ≤ 9
 public:
  Solution();
  void solve();
};  // Solution class

#endif  // __INC_HPP__