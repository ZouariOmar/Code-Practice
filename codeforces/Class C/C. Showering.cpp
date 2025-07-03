/**
 * @file    C. Showering.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   C. Showering source file
 * @version 0.1
 * @date    2025-06-18
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1999/C codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>
#define ulli unsigned long long int

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve(void) {
    int n;  // Number of time intervals Alex already has planned
    ulli s, // Amount of time Alex takes to take a shower
        m;  // Amount of minutes a day has.
    std::cin >> n >> s >> m;
    ulli lastTime{};
    bool result{};
    ulli holder;
    while (n--) {
      std::cin >> holder;
      if (result)
        goto pass;
      result = (holder - lastTime) >= s;
    pass:
      std::cin >> holder;
      lastTime = holder;
    }
    if (!result)
      result = (m - lastTime) >= s;
    std::cout << (result ? "YES" : "NO") << '\n';
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
