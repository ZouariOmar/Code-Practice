/**
 * @file    B. Who's Opposite?.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   B. Who's Opposite? source file
 * @version 0.1
 * @date    2025-06-26
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1560/B codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve(void) {
    int a, b, c;
    std::cin >> a >> b >> c;
    int d = abs(a - b), tp = d * 2;
    if (a > tp || b > tp || c > tp || d == 1 || tp % 2)
      std::cout << -1 << '\n';
    else if (c + d >= 1 && c + d <= tp)
      std::cout << c + d << '\n';
    else if (c - d >= 1 && c - d <= tp)
      std::cout << c - d << '\n';
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
