/**
 * @file    A. Odd Set.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   A. Odd Set source file
 * @version 0.1
 * @date    2025-06-22
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1542/A codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve(void) {
    unsigned short n;
    std::cin >> n;
    unsigned len(n * 2), holder, odds{};
    while (len--) {
      std::cin >> holder;
      if (holder & 1)
        odds++;
    }
    std::cout << (odds == n ? "YES" : "NO") << '\n';
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
