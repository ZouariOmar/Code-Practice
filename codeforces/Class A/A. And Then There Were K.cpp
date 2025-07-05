/**
 * @file      A. And Then There Were K.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     A. And Then There Were K source file
 * @version   0.1
 * @date      04/07/2025
 * @copyright Copyright (c) 20225
 * @link      https://codeforces.com/problemset/problem/1527/A codeforces @endlink
 */

//? Include prototype declaration part
#include <cmath>
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve(void) {
    unsigned int n;
    std::cin >> n;
    int msb = log2(n);
    std::cout << ((1 << msb) - 1) << '\n';
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
  unsigned int t;
  std::cin >> t;
  while (t--)
    Solution::solve();
  return EXIT_SUCCESS;
}
