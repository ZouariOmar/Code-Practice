/**
 * @file    A. Fair Playoff.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   A. Fair Playoff source file
 * @version 0.1
 * @date    2025-06-23
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1535/A codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve(void) {
    unsigned short s1, s2, s3, s4;
    std::cin >> s1 >> s2 >> s3 >> s4;
    std::cout << (s1 > s3 && s1 > s4 && s2 > s3 && s2 > s4 || s3 > s1 && s3 > s2 && s4 > s1 && s4 > s2 ? "NO" : "YES") << '\n';
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
  unsigned int t; // Number of test cases
  std::cin >> t;
  while (t--)
    Solution::solve();
  return EXIT_SUCCESS;
}
