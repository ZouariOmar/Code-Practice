/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-18
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1624/A codeforce @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <climits>
#include <iostream>
#include <vector>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class Solution {
private:
  int t;                                 // Number of test cases
  short n;                               // 1 ≤ n ≤ 50
  pair<long long int, long long int> pr; // Store min|max of the given array

public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__