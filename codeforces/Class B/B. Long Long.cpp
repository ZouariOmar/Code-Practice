/**
 * @file    B. Long Long.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   B. Long Long source file
 * @version 0.1
 * @date    2025-06-04
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1843/B codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>
#define lli long long int

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    unsigned int n, // Length of the array
        op{};       // Final op result
    lli sum{};      // Final sum result
    std::cin >> n;
    lli holder;
    bool is_positive(true);
    while (n--) {
      std::cin >> holder;
      sum += std::abs(holder);
      if (is_positive && holder < 0)
        is_positive = false;
      else if (!is_positive && holder > 0)
        is_positive = true, op++;
    }
    std::cout << sum << " " << op + !is_positive << '\n';
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
  unsigned int t; // Number of test caese
  std::cin >> t;
  while (t--)
    Solution::solve();
  return EXIT_SUCCESS;
}
