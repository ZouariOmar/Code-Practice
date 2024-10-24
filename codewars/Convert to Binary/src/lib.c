/**
 * @file lib.c
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-23
 * @copyright Copyright (c) 2024
 * @link https://www.codewars.com/kata/59fca81a5712f9fa4700159a/train/c codeWars @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.h"

//? Function/Class prototype dev part

/**
 * @brief ### Returns an integer d such that the binary representation of b is the same as the decimal representation of d.
 * @param num unsigned short
 * @return unsigned long long
 */
unsigned long long to_binary(unsigned short n) {
  // To store the binary number
  ull B_Number = 0;
  int cnt = 0;
  while (n) {
    ull c = pow(10, cnt);
    B_Number += n % 2 * c;
    n /= 2;
    cnt++;
  }
  return B_Number;
}

/*
* Other solution
unsigned long long to_binary(unsigned short num) {
  if (num>1)
    return 10*to_binary(num/2)+num%2;
  return num;
}
*/
