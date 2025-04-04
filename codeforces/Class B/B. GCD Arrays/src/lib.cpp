/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-04
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1629/B codeforces @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp" 

//? Function(s)/Class(es) prototype dev part

Solution::Solution() {
  std::cin >> t;
}

void Solution::solve() {
  while (t--) {
    std::cin >> l >> r >> k;
    if (l == r)
      (l == 1) ? NO : YES;
    else {
      int count;
      if (l % 2 == 0 && r % 2 == 0)
        count = (r - l) / 2;
      else if (l % 2 && r % 2)
        count = (r - l) / 2 + 1;
      else
        count = (r - l + 1) / 2;
      (count <= k) ? YES : NO;
    }
  }
}