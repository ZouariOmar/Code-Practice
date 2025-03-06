/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-04
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1873/C codeforces @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__
#define RING_SIZE 10

//? Include prototype declaration part

//* Include std libs (c++)
#include <algorithm>
#include <iostream>
#include <vector>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class Solution {
public:
  Solution();
  void solve();

private:
  short t; // Number of test cases
  int getScore(short &, short &);
}; // Solution class

#endif // __INC_HPP__