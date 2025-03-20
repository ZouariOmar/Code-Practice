/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-08
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1971/B codeforces @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//? Class prototype declaration part
class Solution {
private:
  unsigned short t; // Number of test cases
  std::string s;    // String `s` of length at most 10 consisting of lowercase English letters

public:
  Solution();
  void solve();
}; // Solution class

#endif  // __INC_HPP__