/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-30
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1392/B codeforces @endlink
 */

// ? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

// ? Include prototype declaration part

// * Include std headers (c++)
#include <limits>
#include <iostream>

// ? Class(es) prototype declaration part
typedef long long int lli;
class Solution {
private:
  unsigned short t;
  lli n, k, d, *arr;

public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__