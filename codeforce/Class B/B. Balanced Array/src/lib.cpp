/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-28
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1343/B codeForce @endlink
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
    if ((n / 2) & 1) {
      cout << "NO" << endl;
      continue;
    }
    cout << "YES" << endl;

    //? Print a sol vector (particular sol)
    vector<int> arr(n); // Result array
    int half{n / 2}, sum_even{}, sum_odd{};

    // Fill the first half with even numbers
    for (int i{}; i < half; ++i)
      arr[i] = 2 * (i + 1), sum_even += arr[i];

    // Fill the second half with odd numbers
    for (int i{}; i < half - 1; ++i)
      arr[half + i] = 2 * i + 1, sum_odd += arr[half + i];

    // Adjust the last element of the second half
    arr[n - 1] = sum_even - sum_odd;

    // Print the result array
    for (int &it : arr)
      cout << it << " ";
    cout << endl; // Newline
  }
}

/**
 * @brief Setup i/o test fn
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif // __TEST__
}