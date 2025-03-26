/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-26
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1633/A codeforces @endlink
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
  unsigned short t; // Number of test cases (1 ≤ t ≤ 990)
  std::string n;            // The given integer (10 ≤ n ≤ 999)
public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__