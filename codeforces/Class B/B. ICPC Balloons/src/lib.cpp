/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-29
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1703/B codeforce @endlink
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
    cin >> n >> s;

    unordered_map<char, int> ump;
    for (const char &c : s)
      ump[c]++;

    int balloons{};
    for (unordered_map<char, int>::iterator it = ump.begin(); it != ump.end(); it++)
      if (it->second)
        balloons += 2 + (it->second - 1);

    cout << balloons << endl;
  }
}