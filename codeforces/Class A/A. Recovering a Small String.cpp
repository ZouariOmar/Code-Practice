/**
 * @file      A. Recovering a Small String.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     filename source file
 * @version   0.1
 * @date      03/07/2025
 * @copyright Copyright (c) 2025
 * @link      https://codeforces.com/problemset/problem/1931/A codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <string>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve(void) {
    unsigned short n;
    std::cin >> n;
    std::string ans{""};

    while (n >= 28) {
      ans.push_back('z');
      n -= 26;
    }

    if (ans.length() == 0) {
      ans = "aa" + std::string(1, 'a' + (n - 3));
    } else if (ans.length() == 1) {
      ans = "a" + std::string(1, 'a' + (n - 2)) + ans;
    } else if (ans.length() == 2) {
      ans = std::string(1, 'a' + n - 1) + ans;
    }

    std::cout << ans << '\n';
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
