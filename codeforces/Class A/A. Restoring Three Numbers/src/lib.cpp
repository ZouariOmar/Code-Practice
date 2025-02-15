/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-20
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1154/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  x.resize(4);  // To Hold the x1, x2, x3 and x4 vars
  for (size_t i{}; i < 4; i++)
    cin >> x[i];
  
  // Make the x4 in the front of the vector
  sort(x.rbegin(), x.rend());
}

/**
 * @brief ### Print the solution in the console
 */
void Solution::solve() {
  cout << x[0] - x[3] << " " << x[0] - x[2] << " " << x[0] - x[1] << endl;
}