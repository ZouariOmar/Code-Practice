/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-10
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/318/A codeforces @endlink
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
  std::cin >> n >> k;
}

/**
 * @brief ### Print solution in console
 * 
 * @class  Solution
 * @return void
 */
inline void Solution::solve() {
  lli oddCount = (n + 1) / 2;
  (k <= oddCount) ? std::cout << 2 * k - 1 << '\n' : std::cout << 2 * (k - oddCount) << '\n';
}