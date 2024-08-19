/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      02-08-2024
 * @link      https://www.hackerearth.com/problem/algorithm/make-palindrome-2-cf7b5be4/?source=list_view
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>
#include <unordered_map>

// Use the stander workspace
using namespace std;

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

class Solution {
 private:
  int len;
  string str;

 public:
  // Constructors declaration part
  Solution();

  // Costume functions declaration part
  bool is_palindrome(string);
  int to_palindrome();
  inline void printCost();
};

#endif