/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      30-08-2024
 * @link      https://codeforces.com/problemset/problem/1030/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

Solution::Solution() {
  cin >> n;
  int tmp;
  while (n--) {
    cin >> tmp;
    if (tmp) break;
  }
  (tmp) ? cout << "HARD" << endl : cout << "EASY" << endl;
}