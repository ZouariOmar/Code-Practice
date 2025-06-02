/**
 * @file    A. System of Equations.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   A. System of Equations source file
 * @version 0.1
 * @date    2025-05-27
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/214/A codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    int n, m, answer{};
    std::cin >> n >> m;
    for (int a{}; a * a <= n && a <= m; ++a) {
      int b = n - a * a;
      if (a + b * b == m)
        answer += 1;
    }
    std::cout << answer << '\n';
  }
}; // Solution class

//? Main function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  Solution::solve();
  return EXIT_SUCCESS;
}
