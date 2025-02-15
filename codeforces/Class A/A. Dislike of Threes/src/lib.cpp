/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-19
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1560/A codeforce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> t;

  int current{1};
  while (likedNumbers.size() < 1000) {  // Precompute up to the 1000th liked number
    if (current % 3 && current % 10 != 3)
      likedNumbers.push_back(current);
    current++;
  }
}

/**
 * @brief ### Print the solution in console
 */
void Solution::solve() {
  // Process each test case
  while (t--) {
    short n;  // 1 ≤ n ≤ 1000
    cin >> n;
    cout << likedNumbers[n - 1] << endl;  // Output the n-th liked number
  }
}

/**
 * @brief Setup i/o test function
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif  // __TEST__
}