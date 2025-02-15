/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      06-09-2024
 * @link      https://codeforces.com/problemset/problem/344/A
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
  size_t n;
  vector<string> arr;

 public:
  Solution();
  void solve();
};  // Solution class

#endif