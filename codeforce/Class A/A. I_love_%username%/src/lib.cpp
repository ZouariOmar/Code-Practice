/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-10
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/155/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution()
    : res(0) {
  cin >> len;

  cin >> holder;
  viewer.first = holder;
  viewer.second = holder;
  len--;

  while (len--) {
    cin >> holder;
    if (holder > viewer.first || holder < viewer.second) {
      res++;
      viewer.first = max(viewer.first, holder);
      viewer.second = min(viewer.second, holder);
    }
  }
}

/**
 * @brief ### Print the number of amazing performances the coder has had during his whole history of participating in the contests.
 */
void Solution::solve() {
  cout << res << endl;
}

/**
 * @brief ### Setup io test function
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif  // __TEST__
}