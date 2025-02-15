/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-27
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1692/A codeForce @endlink
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
  size_t t;   // Number of test cases
  int Timur;  // The main compared marathon participant
 public:
  Solution();    // Solution constructor
  void solve();  // Main solution
};  // Solution class

#endif  // __INC_HPP__