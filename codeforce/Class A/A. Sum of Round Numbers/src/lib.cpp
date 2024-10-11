/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-07
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1352/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution()
    : zero('0') {
  cin >> t;
}

void Solution::solve() {
  while (t--) {
    cin >> holder;
    size_t len{holder.size()};

    vector<string> res;

    for (size_t i{}; i < len; i++) {
      if (holder[i] != '0') {
        string element(len - i, '0');
        element[0] = holder[i];
        res.push_back(element);
      }
    }

    cout << res.size() << endl;
    for (string s : res)
      cout << s << " ";
    cout << endl;
  }
}

/**
 * @brief ### Setup the io test function
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif
}