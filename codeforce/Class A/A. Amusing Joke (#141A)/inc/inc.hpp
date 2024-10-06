/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-06
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/141/A codeForce @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>
#include <unordered_map>

//* Use stander workspace
using namespace std;

/*
 * Include std libs (c)
 * Include custom inc file (h/hpp)
 */

//? Class prototype declaration part

class Solution {
 private:
  string holder;
  unordered_map<char, int> in, out;

 public:
  Solution();
  bool solve();
};  // Solution class

#endif