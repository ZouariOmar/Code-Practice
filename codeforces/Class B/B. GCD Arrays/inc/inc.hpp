/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-04
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1629/B codeforces @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__
#define YES std::cout << "YES" << std::endl
#define NO std::cout << "NO" << std::endl

//? Include prototype declaration part

//* Include std headers (c++)
#include <iostream>

//? Class(es) prototype declaration part
class Solution {
private:
  int t; // Number of test cases
  unsigned long long int l, r, k;

public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__