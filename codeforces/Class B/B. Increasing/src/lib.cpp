/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-26
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1742/B codeforces @endlink
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
 * @brief Print the solution (YES/NO) in console
 * 
 * @class Solution
 */
void Solution::solve() {
  while (t--) {
    std::unordered_map<lli, short> ump;
    std::cin >> n;
    for (short i{}; i < n; i++) {
      lli holder;
      std::cin >> holder;
      ump[holder]++;
    }
    (n == ump.size()) ? std::cout << "YES" << std::endl : std::cout << "NO" << std::endl;
  }
}