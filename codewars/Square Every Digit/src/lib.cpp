/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      19-09-2024
 * @link      https://www.codewars.com/kata/546e2562b03326a88e000020/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Square every digit of a number and concatenate them
 * @param num int
 * @return int
 */
int square_digits(int num) {
  string s_num{to_string(num)};
  int res{};
  
  for (char it : s_num) {
    int x{it - '0'};
    x *= x;
    res *= 10;
    if (x < 10)
      res += x;
    else {
      res *= 10;
      res += x;
    }
  }

  return res;
}

/*
* Other solution
int square_digits(int n) {
  int a = 1;
  int m = 0;
  while (n > 0) {
    int d = n % 10;
    m += a * d * d;
    a *= d <= 3 ? 10 : 100;
    n /= 10;
  }
  return m;
}
*/