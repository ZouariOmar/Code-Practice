/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      25-07-2024
 * @link      https://codeforces.com/problemset/problem/158/A
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
 * @brief #### Construct a new Score:: Score object
 *
 */
Score::Score() {
  cin >> n >> k;

  // Resize the data holder vector
  arr.resize(n);

  // Hold the data
  for (int i = 0; i < n; i++)
    cin >> arr[i];
}

/**
 * @brief #### Print the result
 *
 */
void Score::to_next() {
  // Verify the k and n input
  if (k < 1 || n < k) {
    cout << 0;
    return;
  }

  int res{};
  for (int it : arr) {
    if ((it >= arr[k - 1]) && it)
      res++;
    else
      break;
  }

  // Print the result
  cout << res << endl;
}