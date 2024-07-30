/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      25-07-2024
 * @link      https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Set the up io test fn
 * 
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif
}

/**
 * @brief #### Construct a new Solution:: Solution object
 * 
 */
Solution::Solution() {
  // Take the usr input
  cin >> str[0] >> str[1];
}

/**
 * @brief #### Print the solution of the problem
 * 
 */
void Solution::print_sl() {
  // Print the size of the two strings
  cout << str[0].size() << " " << str[1].size() << endl;

  // Print the concatenation of the two strings
  cout << str[0] + str[1] << endl;

  // Special print
  swap(str[0][0], str[1][0]);
  cout << str[0] << " " << str[1];
}