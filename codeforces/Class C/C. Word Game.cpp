/**
 * @file    C. Word Game.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   C. Word Game source file
 * @version 0.1
 * @date    2025-06-07
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1722/C codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <unordered_map>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve(void) {
    int n;
    std::cin >> n;

    std::vector<std::vector<std::string>> words(3, std::vector<std::string>(n));
    std::unordered_map<std::string, int> freq;

    // Read words and count frequency
    for (int i = 0; i < 3; ++i)
      for (int j = 0; j < n; ++j) {
        std::cin >> words[i][j];
        freq[words[i][j]]++;
      }

    // Score calculation
    std::vector<int> scores(3, 0);
    for (int i = 0; i < 3; ++i)
      for (int j = 0; j < n; ++j) {
        unsigned int cnt = freq[words[i][j]];
        scores[i] += (cnt == 1) * 3 + (cnt == 2);
      }

    // Output scores
    std::cout << scores[0] << ' ' << scores[1] << ' ' << scores[2] << '\n';
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
