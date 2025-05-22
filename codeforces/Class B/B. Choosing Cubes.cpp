/**
 * @file    B. Choosing Cubes.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   B. Choosing Cubes source file
 * @version 0.1
 * @date    2025-05-21
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1980/B codeforces @endlink
 */

//? Include prototype declaration part
#include <algorithm>
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    int n, f, k;
    std::cin >> n >> f >> k;
    std::vector<int> v(n);
    for (size_t i{}; i < n; i++)
      std::cin >> v[i];
    int fav_number(v[f - 1]), counter_fav{};
    for (int i = 0; i < n; i++)
      if (v[i] == fav_number)
        counter_fav++;

    sort(v.rbegin(), v.rend());
    int t_counter_fav = counter_fav;
    for (size_t i{}; i < k; i++)
      if (v[i] == fav_number)
        counter_fav--;

    if (!counter_fav)
      std::cout << "YES\n";
    else if (counter_fav == t_counter_fav)
      std::cout << "NO\n";
    else if (counter_fav > 0 && counter_fav < t_counter_fav)
      std::cout << "MAYBE\n";
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
