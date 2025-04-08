/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-07
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1915/C codeforces @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

/**
 * @fn Solution::Solution()
 *
 * @brief Construct a new Solution::Solution object
 */
Solution::Solution() {
  std::cin >> t;
}

/**
 * @fn Solution::solve()
 *
 * @brief Print the solution in console
 */
void Solution::solve() {
  while (t--) {
    std::cin >> n;
    lli sum{};
    while (n--) {
      std::cin >> holder;
      sum += holder;
    }
    std::cout << ((std::sqrt(sum) == (int)std::sqrt(sum)) ? "YES" : "NO") << '\n';
  }
}