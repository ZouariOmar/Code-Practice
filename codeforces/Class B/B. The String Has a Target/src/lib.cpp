/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-02
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1805/B codeforces @endlink
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
 * @fn    Solution::solve()
 * @brief Print solution in console
 */
void Solution::solve() {
  while (t--) {
    std::cin >> n >> s;
    char min_c{'z'};
    int minp;

    for (int i{}; i < n; i++) 
      if (s[i] <= min_c) 
        min_c = s[i], minp = i;

    char tmp = s[minp];
    s.erase(s.begin() + minp);
    std::cout << tmp << s << "\n";
  }
}