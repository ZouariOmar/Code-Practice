/***************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 ***************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------
//* include std libs
#include <iostream>
#include <vector>

//* use the stander workspace
using namespace std;

//? ----------------------------- FUNCTIONS PROTOTYPE DECLARATION PART -----------------------------

class Solution {
private:
  int len;
  vector<int> arr;
public:
  Solution();
  void printArray();
};

#endif