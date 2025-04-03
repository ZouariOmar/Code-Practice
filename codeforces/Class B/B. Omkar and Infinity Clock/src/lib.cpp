/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-30
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1392/B codeforces @endlink
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
 * @fn     Solution::solve()
 * @brief  Print solution in console
 * @return void
 */
void Solution::solve() {
  while (t--) {
    std::cin >> n >> k;
    arr = new lli[n];
    if (k & 1) {
      d = std::numeric_limits<lli>::min();
      for (lli i{}; i < n; i++) {
        std::cin >> arr[i];
        d = std::max(d, arr[i]);
      }
    } else {
      d = std::numeric_limits<lli>::max();
      for (lli i{}; i < n; i++) {
        std::cin >> arr[i];
        d = std::min(d, arr[i]);
      }
    }
    for (lli i{}; i < n; i++)
      arr[i] = abs(arr[i] - d), std::cout << arr[i] << " ";
    std::cout << '\n';
    delete[] arr;
  }
}

/**
 * @fn     setup_io_test()
 * @brief  Setup i/o test
 * @return void
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif // __TEST__
}