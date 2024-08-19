/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      12-08-2024
 * @link      https://www.hackerrank.com/challenges/cpp-sets/problem?isFullScreen=true
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>
#include <set>

// Use the stander workspace
using namespace std;

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

void setup_io_test();

class Solution {
 private:
  int n, q, tmp;
  set<int> holder;

 public:
  // Constructor declaration part
  Solution();

  // Custom method declaration part
  void setter();
};

#endif