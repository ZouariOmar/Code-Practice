/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-13
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1370/A codeforce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part


// * Key Observation
// > The greatest possible GCD(a,b)GCD(a,b) is achieved when bb is a multiple of aa, and bb is as large as possible. This leads to the conclusion that:
// The maximum GCD is the largest integer kk such that k≤n2k≤2n​.

// ? Why?
//   - If bb is a multiple of aa, then GCD(a,b)=aGCD(a,b)=a.
//   - The largest divisor of nn that is ≤n/2≤n/2 can be paired with nn to achieve the maximum GCD(a,b)GCD(a,b).

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> t;
}

/**
 * @brief ### Print solution in console
 */
inline void Solution::solve() {
  while (t--) {
    cin >> n;
    cout << n / 2 << endl;
  }
}