/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      16-08-2024
 * @link      https://www.hackerearth.com/problem/algorithm/prime-query-bbe5751b/?source=list_view
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>
#include <vector>
#include <math.h>

// Use the stander workspace
using namespace std;

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

class Solution {
 private:
  // Private vars declaration part
  int T;  //? Number of test(s) case(s)
  size_t len;
  vector<int> arr;
  int LR_ln;  //? Q lines follow, each containing two space-separated integers L && R.

  // Tester function declaration part
  void setup_io_test();

 public:
  // Constructors declaration part
  Solution();

  // Custom methods declaration part
  void queries();
  bool isPrime(int);
};

#endif