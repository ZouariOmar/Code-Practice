/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      23-08-2024
 * @link      https://codeforces.com/problemset/problem/734/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> len >> str;
}

/**
 * @brief #### If Anton won more games than Danik, print "Anton" (without quotes) in the only line of the output.
 * *
 * #### If Danik won more games than Anton, print "Danik" (without quotes) in the only line of the output.
 * *
 * #### If Anton and Danik won the same number of games, print "Friendship" (without quotes).
 *
 */
void Solution::winner() {
  int a = count(str.begin(), str.end(), 'A');
  int b{len - a};
  if (a > b)
    cout << "Anton" << endl;
  else if (a < b)
    cout << "Danik" << endl;
  else
    cout << "Friendship" << endl;
}