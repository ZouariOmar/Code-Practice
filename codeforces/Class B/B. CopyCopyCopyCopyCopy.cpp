/**
 * @file    B. CopyCopyCopyCopyCopy.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   B. CopyCopyCopyCopyCopy source file
 * @version 0.1
 * @date    2025-05-01
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1325/B codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <unordered_set>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    int n; // The number of elements in the array a.
    std::unordered_set<int> st;
    std::cin >> n;
    while (n--) {
      int holder;
      std::cin >> holder;
      st.insert(holder);
    }
    std::cout << st.size() << '\n';
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
  int t; // Number of test cases
  std::cin >> t;
  while (t--)
    Solution::solve();
  return EXIT_SUCCESS;
}
