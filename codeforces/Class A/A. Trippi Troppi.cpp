/**
 * @file    A. Trippi Troppi.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   A. Trippi Troppi source file
 * @version 0.1
 * @date    2025-05-20
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/2094/A codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <sstream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    std::string holder, result;
    getline(std::cin, holder);
    std::stringstream ss(holder);
    while (ss >> holder)
      result += holder[0];
    std::cout << result << '\n';
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
  std::cin.ignore();
  while (t--)
    Solution::solve();
  return EXIT_SUCCESS;
}
