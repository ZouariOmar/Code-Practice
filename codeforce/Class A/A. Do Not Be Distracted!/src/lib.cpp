/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-20
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1520/A codeforces @endlink
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
    cin >> n >> str;
    if (n < 3) {
      cout << "YES" << endl;
      continue;
    }

    bool is_suspicious{};
    for (size_t i{}; i < n - 1 && !is_suspicious; ++i) {
      if (str[i] != str[i + 1] && str.substr(i + 1, n).find(str[i]) != string::npos)
        is_suspicious = true;
    }

    (is_suspicious) ? cout << "NO" << endl : cout << "YES" << endl;
  }
}