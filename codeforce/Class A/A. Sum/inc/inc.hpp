/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-15
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1742/A codeForce @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using namespace std;

//? Function prototype declaration part
void setup_io_test();

//? Class prototype declaration part
class Solution {
 private:
  int t;       // Number of tests
  int arr[3];  // a, b, and c integers

 public:
  Solution();  // Constructor
  void solve();
};  // Solution class

#endif