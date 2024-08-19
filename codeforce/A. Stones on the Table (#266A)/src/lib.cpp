/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      08-08-2024
 * @link      https://codeforces.com/problemset/problem/266/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> len >> str;
}

/**
 * @brief #### Fiend the solution
 * @return int 
 */
int Solution::minStones() {
  int res{};

  for (int i = 0; i < len - 1; i++) {
    if (str[i] == str[i + 1])
      res++;
  }

  return res;
}