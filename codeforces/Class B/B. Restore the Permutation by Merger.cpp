/**
 * @file      B. Restore the Permutation by Merger.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     B. Restore the Permutation by Merger source file
 * @version   0.1
 * @date      03/08/2025
 * @copyright Copyright (c) 2025
 * @link      https://codeforces.com/problemset/problem/1385/B codeforces @endlink
 */

//? Include prototype declaration part
#include <cstring>
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve(void) {
    unsigned short n;
    std::cin >> n;
    n <<= 1;
    unsigned short vis[n];
    memset(vis, 0, n * sizeof(unsigned short));
    while (n--) {
      unsigned short tmp;
      std::cin >> tmp;
      if (!vis[tmp]) {
        ++vis[tmp];
        std::cout << tmp << ' ';
      }
    }
    std::cout << '\n';
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
