/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-09
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1857/A codeforces @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> t;
}

/**
 * @brief ### Print solution in console
 */
void Solution::solve() {
  while (t--) {
    cin >> n;
    int evens{}, odds{};
    while (n--) {
      short holder;
      cin >> holder;
      (holder & 1) ? odds += holder : evens += holder;
    }
    ((odds & 1) && (evens & 1) || !(odds & 1) && !(evens & 1)) ? cout << "YES" << endl : cout << "NO" << endl;
  }
}