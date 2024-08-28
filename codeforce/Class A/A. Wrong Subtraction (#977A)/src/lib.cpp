/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      20-08-2024
 * @link      https://codeforces.com/problemset/problem/977/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> n >> k;
}

/**
 * @brief #### Print the wrong subtraction operation of the girl
 */
void Solution::wrongSub() {
  while (k--) (!(n % 10)) ? n /= 10 : n--;
  cout << n << endl;
}