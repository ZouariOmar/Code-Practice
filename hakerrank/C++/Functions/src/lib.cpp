/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief ### Returns the maximum of the four arguments it receives.
 *
 * @param a
 * @param b
 * @param c
 * @param d
 * @return int
 */
inline int max_of_four(int a, int b, int c, int d) {
  return max(max(a, b), max(c, d));
}