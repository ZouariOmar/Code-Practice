/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-17
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1622/A codeforces @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <algorithm>
#include <iostream>

//? Class prototype declaration part
class Solution {
private:
  int t;         // Number of test cases
  int sticks[3]; // Lengths of the sticks

public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__