/**
 * @file    B. Normal Problem.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   B. Normal Problem source file
 * @version 0.1
 * @date    2025-06-01
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/2044/B codeforces @endlink
 */

//? Include prototype declaration part
#include <algorithm>
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    std::string s;
    std::cin >> s;
    std::reverse(s.begin(), s.end());
    for (char &c : s) {
      if (c == 'p')
        c = 'q';
      else if (c == 'q')
        c = 'p';
    }
    std::cout << s << '\n';
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
