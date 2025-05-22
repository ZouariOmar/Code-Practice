/**
 * @file    A. Make it White.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   A. Make it White source file
 * @version 0.1
 * @date    2025-05-22
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1927/A codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    unsigned short n;
    std::string s;
    std::cin >> n >> s;
    int it = s.find('B');
    if (it == std::string::npos) {
      std::cout << 0 << '\n';
      return;
    }
    int it1 = s.find_last_of('B');
    if (it1 == std::string::npos) {
      std::cout << 0 << '\n';
      return;
    }
    std::cout << it1 - it + 1 << '\n';
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
