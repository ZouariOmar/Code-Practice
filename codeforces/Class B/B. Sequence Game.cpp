/**
 * @file    B. Sequence Game.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   B. Sequence Game source file
 * @version 0.1
 * @date    2025-05-29
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1862/B codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>
#define lli long long int

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    unsigned int n, i{};
    std::vector<lli> res;
    std::cin >> n;
    while (i < n) {
      lli tmp;
      std::cin >> tmp;
      if (res.empty()) {
        res.push_back(tmp), i++;
        continue;
      }
      if (tmp < res[res.size() - 1])
        res.push_back(tmp);
      res.push_back(tmp);
      i++;
    }
    std::cout << res.size() << '\n';
    for (const lli &it : res)
      std::cout << it << ' ';
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
  unsigned int t;
  std::cin >> t;
  while (t--)
    Solution::solve();
  return EXIT_SUCCESS;
}
