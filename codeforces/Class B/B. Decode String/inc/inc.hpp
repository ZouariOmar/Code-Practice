/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-01
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1729/B codeforces @endlink
 */

// ? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

// ? Include prototype declaration part

// * Include std headers (c++)
#include <algorithm>
#include <iostream>

// ? Class(es) prototype declaration part
class Solution {
private:
  size_t t;      // Number of test cases
  short n;       // Length of the string `s`
  std::string s; // The given string

public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__