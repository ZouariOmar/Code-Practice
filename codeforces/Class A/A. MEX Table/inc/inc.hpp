/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-15
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/2057/A codeforce @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using namespace std;

//? Structure prototype declaration part
typedef long long int lli;

//? Class prototype declaration part
class Solution {
private:
  short t;  // Number of test cases
  lli n, m; // The number of rows and columns in the table, respectively.
public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__ Or __INC_H__