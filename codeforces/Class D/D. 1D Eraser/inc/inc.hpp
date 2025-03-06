/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-06
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1873/D codeforces @endlink
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
  short t;       // Number of test cases (1 ≤ t ≤ 1000)
  int k,         // The integer used in the operation (1 ≤ k ≤ n)
      n;         // Length of the paper (k ≤ n ≤ 2*10^5)
  std::string s; // The strip of paper

public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__