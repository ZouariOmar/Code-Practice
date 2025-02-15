/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-20
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/represent-the-given-number-as-the-sum-of-two-composite-numbers codeForce @endlink
 * @link https://byjus.com/maths/composite-numbers composite-number @endlink
 * @link https://en.wikipedia.org/wiki/Goldbach%27s_conjecture Goldbach-conjecture @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> n;
}

/**
 * @brief ### Print the solution in console
 */
void Solution::solve() {
  (n & 1) ? cout << "9 " << (n - 9) : cout << "4 " << (n - 4);
}