/**
 * @file    A. FashionabLee.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   A. FashionabLee source file
 * @version 0.1
 * @date    2025-06-16
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1369/A codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>
#define ulli unsigned long long int

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve(void) {
    ulli n;
    std::cin >> n;
    std::cout << (n % 4 ? "NO" : "YES") << '\n';
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
