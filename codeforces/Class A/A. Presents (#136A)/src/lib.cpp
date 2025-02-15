/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      11-09-2024
 * @link      https://codeforces.com/problemset/problem/136/A
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

  arr.resize(len);

  for (size_t i{}; i < len; i++)
    cin >> arr[i];
}

/**
 * @brief ### Solve the problem
 */
void Solution::solve() {
  vector<int> res(len);

  for (size_t i{}; i < len; i++)
    res[arr[i] - 1] = i + 1;

  for (int it : res)
    cout << it << " ";
}