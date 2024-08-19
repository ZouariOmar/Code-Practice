/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      12-08-2024
 * @link      https://codeforces.com/problemset/problem/617/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> stp;
}

/**
 * @brief #### Determine the minimum number of steps he need to make in order to get to his friend's house.
 */
void Solution::Steps() {
  cout << stp / 5 + (stp % 5 != 0) << endl;
}