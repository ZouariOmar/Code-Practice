/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-23
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1551/A codeforce @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using namespace std;

// ? Class prototype declaration part
class Solution {
private:
  int t;           // Number of test cases
  long long int n; // The number of burles to be paid by Polycarp

public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__