/**
 * @file    helper.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   helper source file
 * @version 0.1
 * @date    2025-04-27
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1843/C codeforces @endlink
 */

//? Include prototype declaration part
#include "../include/inc.hpp"
#include <iostream>
//? Function(s) prototype dev part

Solution::Solution() {
  std::cin.tie(nullptr)->sync_with_stdio(false);
  std::cin >> t;
}

void Solution::solve() {
  while (t--) {
    std::cin >> n;
    unsigned long long int ans{};
    while (n)
      ans += n, n /= 2;
    std::cout << ans << '\n';
  }
}
