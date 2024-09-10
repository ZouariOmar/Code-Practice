/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      30-08-2024
 * @link      https://www.codewars.com/kata/52f787eb172a8b4ae1000a34/train/cpp
 * @link      https://mathworld.wolfram.com/Factorial.html
 * @link      https://brilliant.org/wiki/trailing-number-of-zeros
 * @link      https://www.geeksforgeeks.org/program-to-compute-log-a-to-any-base-b-logb-a
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Calculate the number of trailing zeros in a factorial of a given number.
 *
 * @param n
 * @return long
 */
long zeros(long n) {
  long res{};
  double l{log2(n) / log2(5)};

  for (int i{1}; i < l; i++)
    res += n / pow(5, i);

  return res;
}