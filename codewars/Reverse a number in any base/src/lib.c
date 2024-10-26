/**
 * @file lib.c
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-25
 * @copyright Copyright (c) 2024
 * @link https://www.codewars.com/kata/6469e4c905eaefffd44b6504/train/c codeWars @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.h"

//? Function/Class prototype dev part

/**
 * @brief ### Returns the number reversed in the base `b`.
 * @param n unsigned int
 * @param b unsigned int
 * @return unsigned int
 */
unsigned int reverse_number(unsigned int n, unsigned int b) {
  if (b == 1) return n;  // In unary, n is represented as n tally marks.

  int digits[32];  // Assuming 32 digits is enough for most practical cases
  int index = 0;

  while (n > 0) {             // Convert n to base b and store the digits
    digits[index++] = n % b;  // Get the remainder
    n /= b;                   // Divide n by base b
  }

  // Convert the reversed digits back to decimal
  int reversed_number = 0;
  for (int i = 0; i < index; i++)
    reversed_number = reversed_number * b + digits[i];

  return reversed_number;
}

/*
* Other solution
unsigned int reverse_number(unsigned int n, unsigned int b) {
  if (b == 1) return n;
  unsigned int o = 0;
  while (n) {
    o = o * b + n % b;
    n /= b;
  }
  return o;
}
*/