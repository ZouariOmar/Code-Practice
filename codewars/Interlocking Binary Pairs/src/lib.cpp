/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      22-09-2024
 * @link      https://www.codewars.com/kata/628e3ee2e1daf90030239e8a/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Checks if two non-negative integers make an "interlocking binary pair"
 * @param a unsigned long long
 * @param b unsigned long long
 * @return true
 * @return false
 */
bool interlockable(unsigned long long a, unsigned long long b) {
  return (a + b) == (a ^ b);  // Or return !(a & b);
}