/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      28-07-2024
 * @link      https://codeforces.com/problemset/problem/50/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_H__
#define __INC_H__

#define D_AREA 2

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>

// Use the stander workspace
using namespace std;

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

class Solution {
 private:
  int m, n;

 public:
  Solution();
  inline void max_dominoes();
};

#endif