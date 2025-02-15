/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-06
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1950/A codeforce @endlink
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
  int arr[3]; // The three digits a, b, and c
  short t;    // The number of test cases
public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__