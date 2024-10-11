/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-09
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/427/A codeForce @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>
#include <vector>

//* Use stander workspace
using namespace std;

//? Function prototype declaration part

void setup_io_test();

//? Class prototype declaration part

class Solution {
 private:
  size_t len;                     // The length of the `arr`
  vector<int> arr;                // Store the hired persons and crimes
  pair<int, int> police_station;  // first::hired persons and second::untreated_crimes
 public:
  Solution();
  void solve();
};  // Solution class

#endif