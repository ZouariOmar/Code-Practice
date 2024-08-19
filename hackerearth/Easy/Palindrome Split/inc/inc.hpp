/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      19-08-2024
 * @link      https://www.hackerearth.com/problem/algorithm/palindrome-split-efe4c78a/?source=list_view
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>
#include <algorithm>

// Use the stander workspace
using namespace std;

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

class Solution {
 private:
  size_t inLen;

 public:
  // Constructors declaration part
  Solution();

  // Custom methods declaration part
  void maxSplitPalindromes();
};

#endif