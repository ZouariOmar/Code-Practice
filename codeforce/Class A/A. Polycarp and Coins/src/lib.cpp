/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-23
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1551/A codeforce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> t;
}

/**
 * @brief ### Print solution in console
 */
void Solution::solve() {
  while (t--) {
    cin >> n;

    long long c2 = n / 3; // Closest integer to n / 3
    long long best_c1 = n - 2 * c2;
    long long best_c2 = c2;
    long long min_diff = abs(best_c1 - best_c2);

    // Check the next candidate, c2 + 1
    long long next_c2 = c2 + 1;
    long long next_c1 = n - 2 * next_c2;
    long long next_diff = abs(next_c1 - next_c2);

    // Update the result if the next candidate is better
    if (next_diff < min_diff)
      best_c1 = next_c1, best_c2 = next_c2;

    cout << best_c1 << " " << best_c2 << endl;
  }
}