/**
 * @file      B. Generate Permutation.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     B. Generate Permutation source file
 * @version   0.1
 * @date      07/12/2025
 * @copyright Copyright (c) 2025
 * @link      https://github.com/ZouariOmar ZouariOmar @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve(void) {
    unsigned int n;
    std::cin >> n;
    if (n % 2) {
      for (unsigned int p(1); p < n; p += 2)
        std::cout << p + 1 << ' ' << p << ' ';
      std::cout << n << '\n';
    } else
      std::cout << "-1\n";
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
