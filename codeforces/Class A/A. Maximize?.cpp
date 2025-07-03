/**
 * @file    A. Maximize?.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   A. Maximize? source file
 * @version 0.1
 * @date    2025-06-24
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1968/A codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <numeric>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve(void) {
    unsigned short x, y(1), currMax(2);
    std::cin >> x;
    for (unsigned short i(2); i < x; i++) {
      unsigned short tmp(std::gcd(x, i) + i);
      if (tmp > currMax)
        currMax = tmp, y = i;
    }
    std::cout << y << '\n';
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
