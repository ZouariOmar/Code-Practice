/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-16
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1931/B codeforces @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 *
 * @class Solution
 */
Solution::Solution() {
  std::cin >> t;
}

/**
 * @brief ### Print solution in console
 * 
 * @class Solution
 */
void Solution::solve() {
  while (t--) {
    int n;
    std::cin >> n;
    std::vector<long long> a(n);
    long long total{};

    for (int i{}; i < n; i++) {
      std::cin >> a[i];
      total += a[i];
    }

    if (total % n != 0) {
      std::cout << "NO\n";
      continue;
    }

    long long avg{total / n};
    long long surplus{};

    for (int i{}; i < n; i++) {
      surplus += a[i] - avg;
      if (surplus < 0)
        break;
    }

    std::cout << ((surplus >= 0) ? "YES\n" : "NO\n");
  }
}