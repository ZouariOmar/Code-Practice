/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-09-2024
 * @link      https://codeforces.com/problemset/problem/520/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> len;

  for (size_t i{}; i < len; ++i) {
    char character;
    cin >> character;
    if (isalpha(character)) st.insert(tolower(character));
  }
}

/**
 * @brief ### Print the result in the terminal
 */
void Solution::solve() {
  (st.size() == 26) ? cout << "YES" << endl : cout << "NO" << endl;
}

/**
 * @brief ### Boost the app runtime
 */
void boost() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
}

/**
 * @brief ### Set the up io test function
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif
}