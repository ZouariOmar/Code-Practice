/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-03
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1714/B codeforces @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

/**
 * @fn    Solution::Solution()
 * @brief Construct a new Solution::Solution object
 */
Solution::Solution() {
  std::cin >> t;
}

/**
 * @fn      Solution::solve()
 * @brief   Print solution in console
 * @details Find the length of the smallest prefix of the given sequence a, after removing which all values in the sequence will be unique
 * @return  void
 */
void Solution::solve() {
  while (t--) {
    std::cin >> n;
    int minDel{};
    std::unordered_map<int, int> ump;
    for (int i{}; i < n; i++) {
      int holder;
      std::cin >> holder;
      if (ump.count(holder))
        minDel = std::max(minDel, ump[holder]);
      ump[holder] = i + 1;
    }
    std::cout << minDel << '\n';
  }
}