/***************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/count-number-of-nice-subarrays/description
 ***************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------
//* include std libs
#include <iostream>
#include <vector>
#include <unordered_map>

//* use the stander workspace
using namespace std;

/*
#include <nameOfLib.c>   || #include "nameOfLib.c"
#include <nameOfLib.h>   || #include "nameOfLib.h"
*/

//? ------------------------------ COLORS PROTOTYPE DECLARATION PART ------------------------------
/*
 * TEXT COLORS
 ** define COLOR "ANSI CODE"...
 * BACKGROUND COLORS
 ** define bgCOLOR "ANSI CODE"...
 */

//? -------------------------------  MSG PROTOTYPE DECLARATION PART -------------------------------
/*
 * ERROR_MSG
 ** define errorMsgXX...
 * SUCCESS_MSG
 ** define successMsgXX...
 */

//? ------------------------------ STRUCT PROTOTYPE DECLARATION PART ------------------------------
/*
 * struct...
 */

//? ----------------------------- FUNCTIONS PROTOTYPE DECLARATION PART -----------------------------

class Solution {
 public:
  int numberOfSubarrays(vector<int>&, int);
};

#endif