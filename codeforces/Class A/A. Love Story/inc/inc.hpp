/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-10
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1829/A codeforce @endlink
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
  short t;                // Number of test cases
  const char pattern[11]; // Compare the `s` string with pattern = "codeforces"
  char s[11];             // Usr input that we will compare it with pattern

public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__