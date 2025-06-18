/**
 * @file    A. One and Two.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   A. One and Two source file
 * @version 0.1
 * @date    2025-06-15
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1788/A codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve(void) {
    short n;
    std::cin >> n;
    unsigned short arr[n], mult{};
    for (size_t i{}; i < n; i++) {
      std::cin >> arr[i];
      mult += arr[i] == 2;
    }
    if (mult & 1) {
      std::cout << -1 << '\n';
      return;
    }
    unsigned int i{}, counter{};
    while (i < n) {
      if (arr[i] == 2)
        counter += 2;
      if (counter == mult)
        break;
      i++;
    }
    std::cout << i + 1 << '\n';
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
