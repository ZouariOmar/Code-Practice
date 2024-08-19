/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      03-08-2024
 * @link      https://codeforces.com/problemset/problem/791/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> a >> b;
}

/**
 * @brief ### Print number of years after which Limak will become strictly larger than Bob.
 *
 */
void Solution::result() {
  int res{};

  // Main function code
  while (a <= b) {
    a *= 3;
    b *= 2;
    res++;
  }

  // Print the result
  cout << res << endl;
}