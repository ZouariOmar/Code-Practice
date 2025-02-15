/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      27-08-2024
 * @link      https://codeforces.com/problemset/problem/677/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>
#include <vector>

// Use the stander workspace
using namespace std;

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

class Solution {
 private:
  size_t n, h;
  vector<int> arr;

 public:
  Solution();
  void solve();
};  // Solution class

#endif