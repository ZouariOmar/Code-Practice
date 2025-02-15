/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      23-09-2024
 * @link      https://codeforces.com/problemset/problem/469/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_HPP__
#define __INC_HPP__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>
#include <set>

// Use the stander workspace
using namespace std;

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

/**
 * ? Constraints
 * * 1 ≤  n ≤ 100
 * * 0 ≤ p ≤ n
 * * 1 ≤ ai ≤ n
 */

void boost();

class Solution {
 private:
  set<int> st;
  size_t target, p1, p2;
  void insertToSet(int);

 public:
  Solution();
  void solve();

};  // Solution class

#endif