/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      23-09-2024
 * @link      https://codeforces.com/problemset/problem/469/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> target;

  // Little X levels
  cin >> p1;
  insertToSet(p1);

  // Little Y levels
  cin >> p2;
  insertToSet(p2);
}

/**
 * @brief ### Set insert helper function
 * @param x int
 */
void Solution::insertToSet(int x) {
  for (size_t i{}; i < x; i++) {
    int in;
    cin >> in;
    st.insert(in);
  }
}

/**
 * @brief ### The main solution function
 */
void Solution::solve() {
  (st.size() != target) ? cout << "Oh, my keyboard!" << endl : cout << "I become the guy." << endl;
}

/**
 * @brief ### Boost the app (increase the runtime)
 */
void boost() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

/**
 * @brief ### Set the up io test function
 * *
 * ! Testing function
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif
}