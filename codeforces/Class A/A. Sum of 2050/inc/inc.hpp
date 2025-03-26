/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-22
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1517/A codeforces @endlink
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
  short t;         // Number of the test cases (1 ≤ t ≤ 1000)
  long long int n; // The number to be represented (1 ≤ n ≤ 10^18)

public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__