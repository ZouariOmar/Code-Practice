/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      23-07-2024
 * @link      https://www.codewars.com/kata/56606694ec01347ce800001b/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Return true if a triangle can be built with the sides of given length and false in any other case.
 *
 * @param a
 * @param b
 * @param c
 * @return true
 * @return false
 */
bool Triangle::isTriangle(int a, int b, int c) {
  return (c < a + b && b < a + c && a < b + c);
}