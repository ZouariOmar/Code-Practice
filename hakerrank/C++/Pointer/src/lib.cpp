/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-07-22
 * @copyright Copyright (c) 2024
 * @link      https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief 
 * 
 * @param a 
 * @param b 
 */
void update(int *a, int *b) {
  // Define two holders
  int A = *a, B = *b;

  // Do the operations
  A += *b;
  B = abs(*a - *b);

  // Submit the results to root vars
  *a = A;
  *b = B;
}