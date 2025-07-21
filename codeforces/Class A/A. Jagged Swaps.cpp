/**
 * @file      A. Jagged Swaps.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     A. Jagged Swaps source file
 * @version   0.1
 * @date      07/08/2025
 * @copyright Copyright (c) 2025
 * @link      https://codeforces.com/problemset/problem/1896/A codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve(void) {
    unsigned short n, arr[10]{}, tmp;
    bool is_permutation(true);
    std::cin >> n >> tmp;
    if (tmp != 1)
      is_permutation = false;
    ++arr[0];
    for (unsigned short i{}; i < n - 1; ++i) {
      std::cin >> tmp;
      if (is_permutation) {
        if (tmp > n || arr[tmp - 1])
          is_permutation = false;
        ++arr[tmp - 1];
      }
    }
    std::cout << (is_permutation ? "YES" : "NO") << '\n';
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
