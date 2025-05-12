/**
 * @file    B. Ten Words of Wisdom.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   B. Ten Words of Wisdom source file
 * @version 0.1
 * @date    2025-05-03
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1850/B codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    unsigned short n, idx(1), res{}, maxScore{};
    std::pair<unsigned short, unsigned short> response; // First: words --- Second: quality
    std::cin >> n;
    while (idx <= n) {
      std::cin >> response.first >> response.second;
      if (response.first < 11 && response.second > maxScore) {
        maxScore = response.second;
        res = idx;
      }
      idx++;
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
  std::cin.tie(nullptr)->sync_with_stdio(false);
  unsigned short t;
  std::cin >> t;
  while (t--)
    Solution::solve();
  return EXIT_SUCCESS;
}
