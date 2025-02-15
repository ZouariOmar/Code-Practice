/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      dd-mm-yyyy
 * @link      NONE
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> n;
}

void Solution::solve() {
  n++;

  while (1) {
    unsigned x = n / 1000,
             y = n / 100 % 10,
             z = n / 10 % 10,
             u = n % 10;
    if ((x != y) && (x != z) && (x != u) && (y != z) && (y != u) && (z != u)) break;
    n++;
  }

  cout << n << endl;
}