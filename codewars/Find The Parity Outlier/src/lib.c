/***************************************************
 * @file      lib.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-08-2024
 * @link      https://www.codewars.com/kata/5526fc09a1bbd946250002dc/train/c
 * @copyright Copyright (c) 2024
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.h"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

int find_outlier(const int values[], size_t count) {
  int odds = 0, evens = 0, res1, res2;
  for (size_t i = 0; i < count; i++) {
    if (values[i] & 1) {
      odds++;
      res1 = values[i];
    } else {
      evens++;
      res2 = values[i];
    }
  }

  if (odds == 1)
    return res1;

  return res2;
}