/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief The declaration and include main project file
 * @version 0.1
 * @date 2024-09-28
 * @copyright Copyright (c) 2024
 */

#ifndef __INC_HPP__
#define __INC_HPP__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>

// Use the stander workspace
using namespace std;

//? ------------------------------ STRUCT PROTOTYPE DECLARATION PART ------------------------------

typedef long long int lli;

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

class Solution {
 private:
  lli n;

 public:
  Solution();
  void solve();
};  // Solution class

#endif