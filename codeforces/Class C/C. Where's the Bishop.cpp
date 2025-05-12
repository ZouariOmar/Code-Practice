/**
 * @file    C. Where's the Bishop.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   C. Where's the Bishop source file
 * @version 0.1
 * @date    2025-05-10
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1692/C codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    char g[9][9];
    for (int i(1); i <= 8; i++)
      for (int j(1); j <= 8; j++)
        std::cin >> g[i][j];

    for (int i(2); i <= 7; i++) {
      for (int j(2); j <= 7; j++)
        if (g[i][j] == '#' && g[i - 1][j - 1] == '#' && g[i - 1][j + 1] == '#' && g[i + 1][j - 1] == '#' && g[i + 1][j + 1] == '#') {
          std::cout << i << " " << j << '\n';
          return;
        }
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
  unsigned short t; // Number of test cases
  std::cin >> t;
  while (t--)
    Solution::solve();
  return EXIT_SUCCESS;
}
