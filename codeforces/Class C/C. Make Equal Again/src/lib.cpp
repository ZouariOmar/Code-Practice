/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-29
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1931/C codeforces @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

Solution::Solution() {
  std::cin >> t;
}

void Solution::solve() {
  while (t--) {
    std::cin >> n;
    arr.resize(n);
    for (int i{}; i < n; i++)
      std::cin >> arr[i];

    if (n == 1) {
      std::cout << 0 << '\n';
      continue;
    }

    int l = 0, h = n - 1;
    while (l < h && arr[l] == arr[l + 1])
      l++;
    while (h > l && arr[h] == arr[h - 1])
      h--;

    std::cout << ((arr[l] == arr[h]) ? std::max(0, h - l - 1) : std::min(n - l - 1, h)) << '\n';
  }
}
