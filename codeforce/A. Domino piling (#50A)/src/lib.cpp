/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      28-07-2024
 * @link      https://codeforces.com/problemset/problem/50/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Construct a new Solution:: Solution object
 * 
 */
Solution::Solution() {
  cin >> m >> n;
}

/**
 * @brief #### Output one number — the maximal number of dominoes, which can be placed.
 *
 */
inline void Solution::max_dominoes() {
  cout << (m * n) / D_AREA << endl;
}