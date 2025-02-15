/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      25-08-2024
 * @link      https://codeforces.com/problemset/problem/116/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> stops;
}

void Solution::Trams() {
  int res{}, current{};

  while (stops--) {
    int in, out;
    cin >> out >> in;
    current += in - out;
    res = max(res, current);
  }

  cout << res << endl;
}