/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-03
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1850/C codeforces @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__
#define __GRID_COLUMN_ROW_SIZE__ 8

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//? Class prototype declaration part
class Solution {
public:
  Solution();
  void solve();

private:
  short t;            // Number of test cases
  std::string buffer; // Tmp holder
}; // Solution class
#endif // __INC_HPP__