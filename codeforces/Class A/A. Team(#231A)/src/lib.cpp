/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-07-2024
 * @link      https://codeforces.com/problemset?order=BY_RATING_ASC
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief Set the up io test fn
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
  // Take the length of the array
  cin >> len;

  // D&D result var (take 0 by default)
  int res{};
  
  // D&D the arr var
  int arr[len][3];

  // Hold the `arr` data and fill the `res` var
  for (int i = 0; i < len; i++) {
    cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    if (arr[i][0] + arr[i][1] + arr[i][2] > 1)
      res++;
  }

  cout << res << endl;
}