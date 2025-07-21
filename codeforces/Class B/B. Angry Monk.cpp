/**
 * @file      B. Angry Monk.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     B. Angry Monk source file
 * @version   0.1
 * @date      07/07/2025
 * @copyright Copyright (c) 2025
 * @link      https://codeforces.com/problemset/problem/1992/B codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve(void) {
    unsigned int n, k;
    std::cin >> n >> k;
    unsigned int res{}, mx{};

    for (size_t i{}; i < k; ++i) {
      unsigned int tmp;
      std::cin >> tmp;
      mx = std::max(mx, tmp);
      res += 2 * tmp - 1;
    }

    res -= 2 * mx - 1;
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
  std::cin.tie(nullptr)->sync_with_stdio(false);
  unsigned int t;
  std::cin >> t;
  while (t--)
    Solution::solve();
  return EXIT_SUCCESS;
}
