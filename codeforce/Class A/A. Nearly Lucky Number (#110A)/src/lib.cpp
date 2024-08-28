/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      21-08-2024
 * @link      https://codeforces.com/problemset/problem/110/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> num;
}

/**
 * @brief ### Print on the single line "YES" if n is a nearly lucky number. Otherwise, print "NO" (without the quotes).
 * *
 * - ####  Number is nearly lucky if the number of lucky digits in it is a lucky number
 */
void Solution::n_lucky() {
  int res{};
  while (num) {
    int tmp = num % 10;
    if (tmp == 4 || tmp == 7) res++;
    num /= 10;
  }
  if (res == 4 || res == 7)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}