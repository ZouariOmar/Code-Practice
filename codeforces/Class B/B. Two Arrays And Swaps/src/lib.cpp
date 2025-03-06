/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-23
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1353/B codeforces @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 *
 * @class Solution
 */
Solution::Solution() {
  cin >> t;
}

/**
 * @brief ### Print solution in console
 *
 * @class Solution
 */
void Solution::solve() {
  while (t--) {
    cin >> n >> k;
    vector<int> a(n, 0), b(n, 0);
    for (short i{}; i < n; i++) // Hold `a` array
      cin >> a[i];
    for (short i{}; i < n; i++) // Hold `b` array
      cin >> b[i];
    sort(a.begin(), a.end());   // Sort `a` in ascending order
    sort(b.rbegin(), b.rend()); // Sort `b` in descending order

    for (short i{}; i < k; i++) // Swap at most k times
      if (b[i] > a[i])
        swap(b[i], a[i]);
      else
        break; // No point in further swaps

    // Compute and print the sum of array `a`
    short sum_a{};
    for (const int &num : a)
      sum_a += num;

    cout << sum_a << endl; // Print result
  }
}