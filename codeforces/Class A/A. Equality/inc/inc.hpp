/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-15
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1038/A codeforces @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>
#include <limits>

//? Class prototype declaration part
class Solution {
private:
  unsigned int n, k;
  std::string s;

public:
  Solution();
  inline void solve() const;
}; // Solution class

#endif // __INC_HPP__