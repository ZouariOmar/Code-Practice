/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-26
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1472/B codeforce @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class Solution {
private:
  int t;   // Number of tes cases (1 ≤ t ≤ 10⁴)
  short n; // Number of candies that Alice and Bob received (1 ≤ n ≤ 100)

public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__