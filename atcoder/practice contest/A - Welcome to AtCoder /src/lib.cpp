/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      21-08-2024
 * @link      https://atcoder.jp/contests/practice/tasks/practice_1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> nums[0] >> nums[1] >> nums[2] >> str;
}

/**
 * @brief ### Print the result
 */
void Solution::print() {
  cout << nums[0] + nums[1] + nums[2] << " " << str << endl;
}