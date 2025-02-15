/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-17
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/732/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> price >> r;
}

/**
 * @brief ### Print the main solution
 */
void Solution::solve() {
  unsigned total_price{price}, rest{total_price % 10}, n = 1;

  while (rest != r && rest) {
    total_price += price;
    rest = total_price % 10;
    n++;
  }

  // Print the result in the console
  cout << n << endl;
}