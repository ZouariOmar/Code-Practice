/**
 * @file      A. Two Screens.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     A. Two Screens source file
 * @version   0.1
 * @date      2025-06-30
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/2025/A codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve(void) {
    std::string s, t;
    std::cin >> s >> t;
    unsigned short i{}, n1(s.length()), n2(t.length()), res{};
    if (s[i] == t[i]) {
      ++res; // For the copy
      while (i < n1 && i < n2 && s[i] == t[i])
        ++res, ++i;
    }
    std::cout << res + (n1 + n2) - (2 * i) << '\n';
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
  unsigned short q; // Number of test cases
  std::cin >> q;
  while (q--)
    Solution::solve();
  return EXIT_SUCCESS;
}
