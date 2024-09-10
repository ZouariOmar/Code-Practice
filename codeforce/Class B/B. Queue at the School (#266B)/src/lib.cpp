/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      29-08-2024
 * @link      https://codeforces.com/problemset/problem/266/B
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> len >> t >> str;
}

void Solution::solve() {
  while (t--) {
    for (int i = 0; i < len - 1; ++i) {
      if (str[i] == 'B' && str[i + 1] == 'G') {
        // Swap the boy and girl
        swap(str[i], str[i + 1]);
        // Skip the next character to avoid double swap in this second
        ++i;
      }
    }
  }

  cout << str << endl;
}