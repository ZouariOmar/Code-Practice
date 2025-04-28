/**
 * @file    helper.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   helper source file
 * @version 0.1
 * @date    2025-04-28
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1692/B codeforces @endlink
 */

//? Include prototype declaration part
#include "../include/inc.hpp"
#include <iostream>
#include <unordered_map>
//? Function(s) prototype dev part

Solution::Solution() {
  std::cin >> t;
}

void Solution::solve() {
  while (t--) {
    std::cin >> n;
    std::unordered_map<unsigned int, unsigned int> ump;
    for (size_t i{}; i < n; ++i) {
      unsigned int tmp;
      std::cin >> tmp;
      ump[tmp]++;
    }

    long odds{}, evens{};
    for (const std::pair<unsigned int, unsigned int> &it : ump)
      (it.second & 1) ? odds++ : evens++;
    std::cout << (odds + evens - (evens % 2)) << '\n';
  }
}
