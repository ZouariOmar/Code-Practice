/**
 * @file      B. Turtle Math: Fast Three Task.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     B. Turtle Math: Fast Three Task source file
 * @version   0.1
 * @date      05/07/2025
 * @copyright Copyright (c) 2025
 * @link      https://codeforces.com/problemset/problem/1933/B codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve(void) {
    unsigned int n, sum{};
    bool is_restOne{};
    std::cin >> n;

    while (n--) {
      unsigned int holder;
      std::cin >> holder;
      if (holder % 3 == 1)
        is_restOne = true;
      sum += holder;
    }

    unsigned int rest(sum % 3);
    if (!rest)
      std::cout << 0 << '\n';
    else if (rest == 2)
      std::cout << 1 << '\n';
    else if (is_restOne)
      std::cout << 1 << '\n';
    else
      std::cout << 2 << '\n';
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
