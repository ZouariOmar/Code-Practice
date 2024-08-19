/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      03-08-2024
 * @link      https://www.hackerrank.com/challenges/vector-erase/problem?isFullScreen=true
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Set the up io test function
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif
}

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  // Hold the length of the array
  cin >> len;

  // Resize the vector
  arr.resize(len);

  // Hold the array data
  for (int i = 0; i < len; i++)
    cin >> arr[i];

  // Use the len to take the first del i-element
  cin >> len;

  arr.erase(arr.begin() + len - 1);

  // Reuse the len again and hold limit del ts0
  cin >> len >> ts0;

  arr.erase(arr.begin() + len - 1, arr.begin() + ts0 - 1);
}

/**
 * @brief ### Print the result
 */
void Solution::printResult() {
  // Print the size of the result array
  cout << arr.size() << endl;

  // Print the array
  for (int it : arr)
    cout << it << " ";
}