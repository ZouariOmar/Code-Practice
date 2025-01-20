/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-17
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1722/A codeforce @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <algorithm>
#include <iostream>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class Solution {
private:
  int t,                // Number of test cases
      n;                // Length of the given string
  string s;             // Given string
  string pattern; // Timur name

public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__