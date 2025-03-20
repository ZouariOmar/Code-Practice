/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-15
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1038/A codeforces @endlink
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
  std::cin >> n >> k >> s;
}

/**
 * @brief ### Print solution in console
 *
 * @class Solution
 */
inline void Solution::solve() const {
  unsigned int set[26]{};
  for (const char &c : s)
    set[c - 'A']++;
  unsigned int result {std::numeric_limits<unsigned int>::max()};
  for (unsigned int i{}; i < k; i++)
    result = std::min(result, set[i]);
  std::cout << result * k << std::endl;
}