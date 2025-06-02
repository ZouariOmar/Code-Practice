/**
 * @file    B. Upscaling.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   B. Upscaling source file
 * @version 0.1
 * @date    2025-05-23
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1950/B codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    unsigned short n;
    std::cin >> n;
    n <<= 1;
    for (size_t i{}; i < n; i++) {
      for (size_t j{}; j < n; j++)
        std::cout << ((i / 2 + j / 2) % 2 == 0 ? '#' : '.');
      std::cout << '\n';
    }
  }
}; // Solution class
//? Main function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  std::cin.tie(nullptr)->sync_with_stdio(false);
  unsigned short t;
  std::cin >> t;
  while (t--)
    Solution::solve();
  return EXIT_SUCCESS;
}
