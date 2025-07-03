/**
 * @file      B. File Name.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     B. File Name source file
 * @version   0.1
 * @date      2025-07-01
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/978/B codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve(void) {
    unsigned short n, res{};
    std::string s;
    std::cin >> n >> s;
    for (size_t i{}; i < n - 2; ++i) {
      if (s[i] == s[i + 1] && s[i + 1] == s[i + 2] && s[i] == 'x')
        ++res;
    }
    std::cout << res << '\n';
  }
}; // Solution class

//? Main function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  Solution::solve();
  return EXIT_SUCCESS;
}
