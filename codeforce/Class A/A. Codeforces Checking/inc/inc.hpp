/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-07
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1791/A codeForce @endlink
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
  const string pattern;
  short t;  // Number o test cases (1 ≤ t ≤ 26)
 public:
  Solution();  // Solution constructor
  void solve();
};  // Solution class

#endif  // __INC_HPP__Or __INC_H__