/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-02
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1791/C codeforces @endlink
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
  short t,       //  Number of test cases
      n;         // The length of Timur's final string.
  std::string s; // Timur string

public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__