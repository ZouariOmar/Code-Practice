/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      25-09-2024
 * @link      https://codeforces.com/problemset/problem/144/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_HPP__
#define __INC_HPP__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <limits.h>

#include <iostream>

// Use the stander workspace
using namespace std;

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

void setup_io_test();
void boost();

class Solution {
 private:
  int iMin, iMax;
  size_t len;

 public:
  Solution();
  void solve();
};  // Solution class

#endif