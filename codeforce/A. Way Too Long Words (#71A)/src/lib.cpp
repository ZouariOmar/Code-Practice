/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      23-07-2024
 * @link      https://codeforces.com/problemset/problem/71/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Set the up io redirection function
 *
 */
void setup_io_redirection() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
  freopen("../test/out.txt", "w", stdout);
#endif
}

/**
 * @brief #### Construct a new Solution:: Solution object
 *
 */
Solution::Solution() {
  // Take the length of the array
  cin >> len;

  // Resize the array
  arr.resize(len);

  for (int i = 0; i < len; i++) {
    cin >> arr[i];

    size_t element_len = arr[i].size();

    // If the size of the string is less or equal then 10 ==> Skip the loop
    if (element_len <= 10) goto her;

    // if the size of the string is greater than 10 ==> Modify it
    arr[i] = arr[i][0] + to_string(element_len - 2) + arr[i][element_len - 1];

  her:
    cout << arr[i] << endl;
  }
}