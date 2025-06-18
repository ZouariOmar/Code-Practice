/**
 * @file    A. How Much Does Daytona Cost?.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   A. How Much Does Daytona Cost? source file
 * @version 0.1
 * @date    2025-06-13
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1878/A codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    unsigned short n, k, holder;
    bool isExist{};
    std::cin >> n >> k;
    while (n--) {
      std::cin >> holder;
      if (holder == k)
        isExist = true;
    }
    std::cout << ((isExist) ? "YES" : "NO") << '\n';
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
