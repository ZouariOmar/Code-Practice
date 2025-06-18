/**
 * @file    A. Gregor and Cryptography.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   A. Gregor and Cryptography source file
 * @version 0.1
 * @date    2025-06-14
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1549/A codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>
#define lli long long int

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    lli p;
    std::cin >> p;
    std::cout << (p - 1) / 2 << ' ' << p - 1 << '\n';
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
