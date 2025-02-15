/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      30-07-2024
 * @link      https://codeforces.com/problemset/problem/339/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Set the up io test function
 *
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif
}

/**
 * @brief Construct a new Calculate::Calculate object
 *
 */
Calculate::Calculate() {
  cin >> str;
}

/**
 * @brief #### Print the new format of the string
 *
 */
void Calculate::niceFormat() {
  if (!str.size() || str.size() != 1)
    bubble_sort(str);

  cout << str << endl;
}

/**
 * @brief ####  Sort the string using Bubble Sort method
 * 
 * @param str 
 */
void Calculate::bubble_sort(string &str) {
  bool swapped;
  size_t len = str.size();

  do {
    swapped = false;
    for (size_t i = 0; i < len - 2; i++) {
      if (str[i] > str[i + 2]) {
        swap(str[i], str[i + 2]);
        swapped = true;
      }
    }
    len--;  // Reduce the length each iteration since the largest element is already sorted
  } while (swapped);
}