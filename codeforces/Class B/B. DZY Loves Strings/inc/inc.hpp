/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-28
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/447/B codeforces @endlink
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
  std::string s; // DZY string
  int k,         // Number of lowercase letters that DZY want to insert into `s`
      w[26];

public:
  Solution();
  int getMaxWc();
  inline void solve();
}; /// Solution class

#endif // __INC_HPP__