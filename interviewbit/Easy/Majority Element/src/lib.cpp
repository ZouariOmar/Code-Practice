/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      02-08-2024
 * @link      https://www.interviewbit.com/problems/majority-element
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief 
 * 
 * @param A 
 * @return int 
 */
int Solution::majorityElement(const vector<int> &A) {
  for (int it : A) {
    int ct (count(A.begin(), A.end(), it));
    if (ct > A.size() / 2)
      return it;
  }

  return 0;
}
