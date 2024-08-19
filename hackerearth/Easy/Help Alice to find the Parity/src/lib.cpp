/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      02-08-2024
 * @link      https://www.hackerearth.com/problem/algorithm/help-alice-to-find-the-parity-f65a1d30/?source=list_view
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

  //? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

  /**
   * @brief Construct a new Solution::Solution object
   * 
   */
  Solution::Solution() {
    // Take usr input
    cin >> l >> r;
  }

  void Solution::find_parity() {
    int res = l;

    for (int i = l + 1; i <= r; ++i) {
      res ^= i;
    }

    (res & 1) ? cout << "odd" : cout << "even";
  }