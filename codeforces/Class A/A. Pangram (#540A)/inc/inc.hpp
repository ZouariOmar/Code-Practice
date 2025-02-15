/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-09-2024
 * @link      https://codeforces.com/problemset/problem/520/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_HPP__
#define __INC_HPP__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>
#include <unordered_set>

// Use the stander workspace
using namespace std;

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

/**
 * ? Constraints
 * * - 1 ≤ n ≤ 100
 * * - A pangram is a sentence containing every letter in the English Alphabet.
 */

void boost();

class Solution {
 private:
  size_t len;
  unordered_set<char> st;

 public:
  Solution();
  void solve();

};  // Solution class

#endif