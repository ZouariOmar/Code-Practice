/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-09-29
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/443/A CodeForces @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>
#include <unordered_set>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part

class Solution {
 private:
  unordered_set<char> st;
  string in;

 public:
  Solution();
  void solve();
};  // Solution class

#endif