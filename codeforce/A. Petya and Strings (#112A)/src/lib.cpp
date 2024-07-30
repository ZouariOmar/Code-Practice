/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      29-07-2024
 * @link      https://codeforces.com/problemset/problem/112/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Set the up io test function
 * 
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif
}

/**
 * @brief #### Construct a new cmp str::cmp_str object
 * 
 */
cmp_str::cmp_str() {
  cin >> str0 >> str1;
  transform(str0.begin(), str0.end(), str0.begin(), ::tolower);
  transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
}

/**
 * @brief #### Compare 2 strings
 * *
 * - If the first string is less than the second one, print "-1".
 * *
 * - If the second string is less than the first one, print "1".
 * *
 * - If the strings are equal, print "0".
 */
void cmp_str::cmp_res() {
  if (str0 == str1)
    cout << "0";
  else if (str0 > str1)
    cout << "1";
  else
    cout << "-1";
}