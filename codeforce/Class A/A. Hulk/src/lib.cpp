/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      20-09-2024
 * @link      https://codeforces.com/problemset/problem/705/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------
/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> feel;
}

/**
 * @brief ### Solve the problem
 */
void Solution::solve() {
  string res = "";
  size_t i{1};

  while (i <= feel) {
    (i & 1) ? (res += "I hate") : (res += "I love");
    if (i != feel) res += " that ";
    i++;
  }
  res += " it";
  cout << res << endl;
}

/**
 * @brief ### Boost the app
 * *
 * - Disconnect the c sync with c++
 * *
 * - Remove the fflush mode (clear the buffer memory)
 */
void boost() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}