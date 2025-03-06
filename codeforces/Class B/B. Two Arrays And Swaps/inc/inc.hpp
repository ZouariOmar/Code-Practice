/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-23
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1353/B codeforces @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <algorithm>
#include <iostream>
#include <vector>

//* Use stander workspace
using namespace std;

// ? Class prototype declaration part
class Solution {
private:
  short t, // Number of test cases (1 ≤ t ≤ 200)
      n,   // Number of element in `a` and `b` (1 ≤ n ≤ 30)
      k;   // Maximum number of moves (swaps) (0 ≤ k ≤ n)

public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__