/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      03-09-2024
 * @link      https://www.interviewbit.com/problems/reverse-the-string
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Return the reversed string of `A` 
 * @param A 
 * @return string 
 */
string Solution::solve(string A) {
  stringstream s(A);
  A = "";
  string tmp;
  while (s >> tmp) {
    A = tmp + " " + A;
  }
  // Del the last space
  A.erase(A.end() - 1);

  return A;
}