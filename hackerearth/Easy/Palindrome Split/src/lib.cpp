/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      19-08-2024
 * @link      https://www.hackerearth.com/problem/algorithm/palindrome-split-efe4c78a/?source=list_view
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> inLen;
}

void Solution::maxSplitPalindromes() {
  while (inLen--) {
    string str;
    cin >> str;

    // Sort the string
    sort(str.begin(), str.end());
    size_t len = str.size();

    size_t i{};
    int res{};

    while (i < len - 1) {
      if (str[i] == str[i + 1]) {
        res++;
        i += 2;
      } else
        i++;
    }
    cout << res << endl;
  }
}