/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-21
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1611/A codeforces @endlink
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
    std::cin >> n;

    // Case 1: Last digit is even → No moves needed
    if ((n.back() - '0') % 2 == 0) {
      std::cout << 0 << std::endl;
      continue;
    }

    // Case 2: First digit is even → Needs 1 move
    if ((n.front() - '0') % 2 == 0) {
      std::cout << 1 << std::endl;
      continue;
    }

    // Case 3: Check for an even digit in between
    for (char c : n)
      if ((c - '0') % 2 == 0) {
        std::cout << 2 << std::endl;
        goto next_case;
      }

    // Case 4: No even digits found
    std::cout << -1 << std::endl;

  next_case:
    continue;
  }
}