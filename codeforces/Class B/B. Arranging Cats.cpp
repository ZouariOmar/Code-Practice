/**
 * @file    B. Arranging Cats.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   B. Arranging Cats source file
 * @version 0.1
 * @date    2025-05-14
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1921/B codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    unsigned int n; // Number of boxes
    std::string s, f;
    std::cin >> n >> s >> f;
    unsigned int ones{}, zeros{};
    while (n--)
      if (s[n] != f[n])
        (s[n] == '0') ? zeros++ : ones++;
    (zeros < ones) ? std::cout << ones << '\n' : std::cout << zeros << '\n';
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
