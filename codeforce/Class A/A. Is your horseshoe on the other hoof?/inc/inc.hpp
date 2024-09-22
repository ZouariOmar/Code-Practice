/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      19-09-2024
 * @link      https://codeforces.com/problemset/problem/228/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_HPP__
#define __INC_HPP__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>
#include <unordered_map>

// Use the stander workspace
using namespace std;

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

class Solution {
 private:
  unordered_map<int, int> ump;
  unordered_map<int, int>::iterator it;

 public:
  Solution();
  void solve();
};  // Solution class

#endif