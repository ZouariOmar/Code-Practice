/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-05
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/80/A codeforce @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>
#include <cmath>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class Solution {
private:
  short n, m; // Two positive integers — n and m (2  ≤  n  <  m  ≤  50). It is guaranteed that n is prime.
  bool is_prime(int);
public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__