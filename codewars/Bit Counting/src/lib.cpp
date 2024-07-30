/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      29-07-2024
 * @link      https://www.codewars.com/kata/526571aae218b8ee490006f4/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Returns the number of bits that are equal to one in the binary representation of that number (32-bit).
 *
 * @param n
 * @return unsigned int
 */
unsigned int countBits(unsigned long long n) {
  string binary = std::bitset<32>(n).to_string();
  return count(binary.begin(), binary.end(), '1');
}