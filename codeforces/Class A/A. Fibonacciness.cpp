/**
 * @file    A. Fibonacciness.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   A. Fibonacciness source file
 * @version 0.1
 * @date    2025-06-02
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/2060/A codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    unsigned short a1, a2, a4, a5;
    std::cin >> a1 >> a2 >> a4 >> a5;
    std::cout << 1 + (a1 + a2 == a4 - a2) + (a4 - a2 == a5 - a4 || a1 + a2 == a5 - a4) << '\n';
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
