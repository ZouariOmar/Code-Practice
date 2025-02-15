/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-05
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/510/A codeForce @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using namespace std;

/*
 * Include std libs (c)
 * Include custom inc file (h/hpp)
 */

//? Structure prototype declaration part

struct Snake {
  unsigned n,  // N-lines
      m;
};  // Snake structure

//? Class prototype declaration part

class Solution {
 private:
  Snake s;
  string r, rl, rr;

 public:
  Solution();
  void solve();
};  // Solution class

#endif