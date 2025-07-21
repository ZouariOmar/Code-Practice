/**
 * @file      A. Linear Keyboard.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     A. Linear Keyboard source file
 * @version   0.1
 * @date      06/07/2025
 * @copyright Copyright (c) 2025
 * @link      https://codeforces.com/problemset/problem/1607/A codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <unordered_map>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve(void) {
    std::string s;
    std::unordered_map<char, unsigned> map; // Map to refer to Keyboard index
    for (unsigned i{}; i < 26; ++i) {
      char tmp;
      std::cin >> tmp;
      map[tmp] = i;
    }
    std::cin >> s;
    unsigned res{}, lastIndex = map[s[0]];
    size_t len = s.length();
    for (unsigned i(1); i < len; ++i) {
      unsigned index(map[s[i]]);
      res += abs(lastIndex - index);
      lastIndex = index;
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
  std ::cin.tie(nullptr)->sync_with_stdio(false);
  unsigned short t;
  std::cin >> t;
  while (t--)
    Solution::solve();
  return EXIT_SUCCESS;
}
