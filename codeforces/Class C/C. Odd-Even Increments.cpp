/**
 * @file    C. Odd-Even Increments.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   C. Odd-Even Increments source file
 * @version 0.1
 * @date    2025-05-02
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1669/C codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i)
      std::cin >> a[i];

    int even_parity = a[0] % 2;
    int odd_parity = a[1] % 2;
    bool valid = true;

    for (int i = 0; i < n; ++i) {
      if ((i % 2 == 0 && a[i] % 2 != even_parity) ||
          (i % 2 == 1 && a[i] % 2 != odd_parity)) {
        valid = false;
        break;
      }
    }
    std::cout << (valid ? "YES" : "NO") << '\n';
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
