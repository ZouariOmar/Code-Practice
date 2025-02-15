/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      31-07-2024
 * @link      https://codeforces.com/problemset/problem/281/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Construct a new Solution::Solution object
 * 
 */
Solution::Solution() {
  cin >> str;
}

/**
 * @brief #### Capitalize the `str` string and print it
 *
 */
void Solution::to_capital() {
  if (str.empty())
    return;
  str[0] = toupper(str[0]);

  cout << str << endl;
}