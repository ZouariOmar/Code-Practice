/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      25-08-2024
 * @link      https://www.interviewbit.com/problems/odd-even-rule
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

int Solution::solve(vector<int> &A, int B, int C) {
  int fine{};
  int cmp;

  if (B & 1)
    cmp = 1;
  else
    cmp = 0;

  size_t len = A.size();
  for (size_t i{}; i < len; i++)
    if (A[i] % 2 == cmp)
      fine += C;

  return fine;
}
