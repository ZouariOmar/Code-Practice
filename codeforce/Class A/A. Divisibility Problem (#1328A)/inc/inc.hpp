/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      21-09-2024
 * @link      https://codeforces.com/problemset/problem/1328/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_HPP__
#define __INC_HPP__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>

// Use the stander workspace
using namespace std;

//? ------------------------- STRUCT PROTOTYPE DECLARATION PART -----------------------------------

typedef long long int lli;

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

class Solution {
 private:
  size_t t;
  pair<lli, lli> pr;

 public:
  Solution();
  void solve();
};

#endif