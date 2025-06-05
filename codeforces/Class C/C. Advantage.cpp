/**
 * @file    C. Advantage.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   C. Advantage source file
 * @version 0.1
 * @date    2025-06-03
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1760/C codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>
#define lli long long int

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    unsigned int n;
    std::cin >> n;
    std::vector<lli> participants(n);
    std::pair<lli, lli> max2elements({0, 0});
    for (lli &it : participants) {
      std::cin >> it;
      if (it > max2elements.first)
        max2elements.second = max2elements.first, max2elements.first = it;
      else if (it > max2elements.second)
        max2elements.second = it;
    }
    for (lli &it : participants)
      std::cout << (it - (it == max2elements.first ? max2elements.second : max2elements.first)) << " ";
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
