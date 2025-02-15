/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-08
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1367/B codeforce @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using std::cout, std::endl, std::cin;

//? Class prototype declaration part
class Solution {
private:
  short t,          // Number of test cases (1 ≤ t ≤ 100)
      n,            // Length of the array `a`
      not_pair_pos, // Number of n[i] that: i % 2 = 1 and a[i] % 2 = 0
      not_odd_pos,  // Number of n[i] that: i % 2 = 0 and a[i] % 2 = 1
      holder;       // Hold n[i] temporary (we not use `a`)

public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__