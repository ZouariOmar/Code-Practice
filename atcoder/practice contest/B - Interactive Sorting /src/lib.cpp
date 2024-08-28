/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      21-08-2024
 * @link      https://atcoder.jp/contests/practice/tasks/practice_2
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

Solution::Solution() {
  cin >> n >> q;
  for (int i{}; i < n; ++i) s += 'A' + i;
}

void Solution::sort() {
  bool swapped;
  for (int i = 0; i < n - 1; i++) {
    swapped = false;
    for (int j = 0; j < n - i - 1; j++) {
      cout << "? " << s[j] << " " << s[j + 1] << endl;
      char ans;
      cin >> ans;
      if (ans == '>') {
        swap(s[j], s[j + 1]);
        swapped = true;
      }
    }

    // If no two elements were swapped ==> by inner loop, then break
    if (swapped == false)
      break;
  }

  cout << "! " << s;
  fflush(stdout);
}