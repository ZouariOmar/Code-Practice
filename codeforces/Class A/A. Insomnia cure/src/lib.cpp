/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      27-09-2024
 * @link      https://codeforces.com/problemset/problem/148/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> k >> l >> m >> n >> d;
}

/**
 * @brief ### Print the result
 */
void Solution::solve() {
  int dmg_dragons{};

  for (size_t i{1}; i <= d; ++i)
    if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
      dmg_dragons++;

  cout << dmg_dragons << endl;
}

/**
 * @brief ### Boot the app
 */
void boost() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}