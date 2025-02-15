/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      12-09-2024
 * @link      https://codeforces.com/problemset/problem/200/B
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>

// Use the stander workspace
using namespace std;

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

void boost();

class Solution {
 private:
  size_t n;
  double sum;

 public:
  Solution();
  void Solve();
};  // Solution class

#endif