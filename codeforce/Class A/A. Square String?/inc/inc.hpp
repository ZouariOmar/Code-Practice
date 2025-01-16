/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-16
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1619/A codeforce @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class Solution {
private:
  short t;  // Number of test cases (1 ≤ t ≤ 100)
  string s; // strings consist only of lowercase Latin letters and have lengths between 1 and 100 inclusive.

public:
  Solution();
  inline void solve();
}; // Solution class

#endif // __INC_HPP__