/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-14
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/151/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
}

/**
 * @brief ### Print how many toasts can each friend make?
 */
void Solution::solve() {
  // Calculate the total amount of drink, lime slices, and salt
  int total_drink{k * l}, total_limes{c * d}, total_salt{p};

  // Calculate the maximum number of toasts based on each resource
  int toasts_drink = total_drink / (n * nl);
  int toasts_limes = total_limes / n;
  int toasts_salt = total_salt / (n * np);

  // Find the minimum number of toasts that can be made
  int result{min(toasts_drink, min(toasts_limes, toasts_salt))};

  // Output the result
  std::cout << result << std::endl;
}