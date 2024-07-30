/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      28-07-2024
 * @link      https://codeforces.com/problemset/problem/263/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Set the up io test function
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
  for (int i = 0; i < 5; i++)
    for (int j = 0; j < 5; j++) {
      cin >> matrix[i][j];
      if (matrix[i][j]) {
        i_row = i;
        j_colum = j;
      }
    }
}

/**
 * @brief #### Print the minimum number of moves needed to make the matrix beautiful
 *
 */
inline void Solution::min_mvs() {
  cout << abs(MID_i - i_row) + abs(MID_j - j_colum) << endl;
}