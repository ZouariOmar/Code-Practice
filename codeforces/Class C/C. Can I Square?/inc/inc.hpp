/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-07
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1915/C codeforces @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std headers (c++)
#include <cmath>
#include <iostream>

//? Class(es) prototype declaration part
typedef long long int lli;
class Solution {
private:
  size_t t; // Number of test cases
  int n; // The number of buckets
  lli holder;

public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__