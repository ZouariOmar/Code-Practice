/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-01
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1729/B codeforces @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

/**
 * @fn    Solution::Solution()
 * @brief Construct a new Solution::Solution object
 */
Solution::Solution() {
  std::cin >> t;
}

/**
 * @brief  Solution::solve()
 * @return void
 */
void Solution::solve() {
  while (t--) {
    std::cin >> n >> s;
    std::string ans;
    for (int i = 0; i < n;) {
      if (i + 2 < n && s[i + 2] == '0' && (i + 3 >= n || s[i + 3] != '0'))
        ans += 'a' + stoi(s.substr(i, 2)) - 1, i += 3;
      else
        ans += 'a' + (s[i] - '0') - 1, i++;
    }
    std::cout << ans << '\n';
  }
}
