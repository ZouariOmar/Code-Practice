/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      16-09-2024
 * @link      https://codeforces.com/problemset/problem/61/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> str1;
  cin >> str2;
}

/**
 * @brief ### Show the the new string result
 * *
 * - #### Note: str1 and str2 have the same length
 */
void Solution::solve() {
  // Length of str1 (or str2)
  size_t len{str1.size()};

  for (size_t i{}; i < len; i++)
    (str1[i] == str2[i]) ? str1[i] = '0' : str1[i] = '1';

  // Display the result
  cout << str1 << endl;
}

/**
 * @brief ### Boost the cpp app
 * *
 * - #### Disable the the C synchronization
 * *
 * - #### Display the auto flush
 */
void boost() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}