/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-07-2024
 * @link      https://www.codewars.com/kata/5262119038c0985a5b00029f/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Verifier if the `num` is primary number or not
 *
 * @param num
 * @return true
 * @return false
 */
bool isPrime(int num) {
  // Corner case
  if (num <= 1)
    return false;

  // Check from 2 to n-1
  int div = sqrt(num);
  for (int i = 2; i <= div; i++)
    if (!(num % i)) return false;

  return true;
}