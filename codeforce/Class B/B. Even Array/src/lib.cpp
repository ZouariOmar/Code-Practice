/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-08
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1367/B codeforce @endlink
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
 * @brief ### Print the solution into console
 */
void Solution::solve() {
  while (t--) {
    cin >> n;
    not_odd_pos = 0, not_pair_pos = 0;
    for (int i{}; i < n; ++i) {
      cin >> holder;
      if ((i & 1) && !(holder & 1))
        not_pair_pos++;
      else if (!(i & 1) && (holder & 1))
        not_odd_pos++;
    }
    (not_odd_pos == not_pair_pos) ? cout << not_odd_pos << endl : cout << -1 << endl;
  }
}