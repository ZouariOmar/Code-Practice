/**
 * @file    C. Find and Replace.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   C. Find and Replace source file
 * @version 0.1
 * @date    2025-05-12
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1807/C codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <unordered_map>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    std::string s;    // The string `s`
    unsigned short n; // The length of the string `s`
    std::cin >> n >> s;
    std::unordered_map<char, char> ans;
    bool sol(true);
    for (int i = 0; i < n; i++) {
      char c;
      (i & 1) ? c = 'x' : c = 'y';
      if (!ans.count(s[i]))
        ans[s[i]] = c;
      else if (ans[s[i]] != c) {
        sol = false;
        break;
      }
    }
    std::cout << ((sol) ? "YES\n" : "NO\n");
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
