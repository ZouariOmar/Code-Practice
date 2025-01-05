/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-02
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/431/A codeforce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> calories[0] >> calories[1] >> calories[2] >> calories[3] >> strips;
}

/**
 * @brief ### Print solution into console
 */
void Solution::solve() {
  int ans{};
  for (char &c : strips)
    ans += calories[c - '1'];
  cout << ans << endl;
}