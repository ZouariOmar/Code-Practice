/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-26
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1999/A codeForces @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part
//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using std::cout, std::endl, std::cin;

//? Class prototype declaration part
class Solution {
private:
  short t, // Number of test cases
      n;   // Single two-digit positive integer
public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__