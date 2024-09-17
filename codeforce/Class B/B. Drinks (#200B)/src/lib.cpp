/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      12-09-2024
 * @link      https://codeforces.com/problemset/problem/200/B
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Boost the app
 */
void boost() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution()
    : sum(0) {
  cin >> n;
}

/**
 * @brief ### The Main Program solver
 */
void Solution::Solve() {
  size_t i{n};
  while (i--) {
    unsigned int p;
    cin >> p;
    sum += p;
  }

  cout << sum / n << endl;
}