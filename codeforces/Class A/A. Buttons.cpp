/**
 * @file    A. Buttons.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   A. Buttons source file
 * @version 0.1
 * @date    2025-06-06
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1858/A codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>
#define ulli unsigned long long int

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    ulli a, b, c;
    std::cin >> a >> b >> c;
    a += (c / 2) + (c % 2), b += (c / 2);
    std::cout << (a > b ? "First" : "Second") << '\n';
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
  unsigned int t; // Number od test cases
  std::cin >> t;
  while (t--)
    Solution::solve();
  return EXIT_SUCCESS;
}
