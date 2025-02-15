/**
 * @file inc.hpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-26
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1915/A codeForce @endlink
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
  short t;        // Number of test (1 ≤ t ≤ 270)
  short a, b, c;  // Two of the digits are equal, but the third one is different from the other two (0 ≤ a, b, c ≤ 9)
 public:
  Solution();
  void solve();
};  // Solution class

#endif  // __INC_HPP__