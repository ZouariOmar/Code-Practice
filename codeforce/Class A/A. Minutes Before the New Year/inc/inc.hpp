/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-22
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1283/A leetcode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using namespace std;

/**
 * ? Constraints
 * - It is guaranteed that this time is not a midnight
 * - It is guaranteed that both h and m are given without leading zeros.
 */

//? Class prototype declaration part
class Solution {
private:
  const unsigned char DAY_HOURS; 
  short t, // Number of test cases
      h,   // Hours   (0 ≤ h < 24)
      m;   // Minutes (0 ≤ m < 60)

public:
  Solution();
  inline void solve();
}; // Solution class

#endif // __INC_HPP__