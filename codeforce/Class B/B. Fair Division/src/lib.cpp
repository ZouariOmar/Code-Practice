/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-26
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1472/B codeforce @endlink
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
 * @brief ### Print the solution in console
 */
void Solution::solve() {
  while (t--) {
    cin >> n;
    int candy_1g{}, candy_2g{};
    while (n--) {
      int holder;
      cin >> holder;
      (holder == 1) ? candy_1g++ : candy_2g++;
    }
    (!(candy_1g & 1) && !(candy_2g & 1)) ? cout << "YES" << endl : cout << "NO" << endl;
  }
}