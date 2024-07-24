/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      23-07-2024
 * @link      https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief Set the up io redirection object
 * 
 */
void setup_io_redirection() {
#ifndef __TEST__
  freopen("../test/input.txt", "r", stdin);
  freopen("../out/output", "w", stdout);
#endif
}

/**
 * @brief Construct a new Solution:: Solution object
 * 
 */
Solution::Solution() {
  cin >> var_len_arr >> queries;

  // Resizing the arr
  arr.resize(var_len_arr);

  // Take the arrays info
  for (int i = 0; i < queries; i++) {
    size_t sizeofArray;
    cin >> sizeofArray;
    arr[i].resize(sizeofArray);  // We give the array in position i the sizeofArray
    for (int j = 0; j < sizeofArray; j++)
      cin >> arr[i][j];
  }

  // Print the results
  for (int i = 0; i < queries; i++) {
    cin >> to_print_i >> to_print_j;
    cout << arr[to_print_i][to_print_j] << endl;
  }
}
