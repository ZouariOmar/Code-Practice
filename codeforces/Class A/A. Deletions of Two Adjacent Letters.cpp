/**
 * @file    A. Deletions of Two Adjacent Letters.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   A. Deletions of Two Adjacent Letters source file
 * @version 0.1
 * @date    2025-06-05
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1650/A codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    std::string s;
    char c;
    std::cin >> s >> c;
    for (size_t i{}, len(s.size()); i < len; i += 2)
      if (s[i] == c) {
        std::cout << "YES" << '\n';
        return;
      }
    std::cout << "NO" << '\n';
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
