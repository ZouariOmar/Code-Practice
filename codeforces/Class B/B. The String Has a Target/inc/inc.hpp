/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-02
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1805/B codeforces @endlink
 */

// ? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

// ? Include prototype declaration part

// * Include std headers (c++)
#include <iostream>

// ? Class(es) prototype declaration part
class Solution {
private:
  size_t t,      // Number of test cases (1 ≤ t ≤ 10⁴)
      n;         // Length of the string `s` (1 ≤ n ≤ 10⁵)
  std::string s; // The given string

public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__