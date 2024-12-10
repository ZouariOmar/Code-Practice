/**
 * @file inc.hpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-08
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/9/A codeForce @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__
#define MAX_DIE 6

//? Include prototype declaration part
//* Include std libs (c++)
#include <iostream>
#include <numeric>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class Solution {
 private:
  pair<int, int> yw;

 public:
  Solution();
  void solve();
};  // Solution class

#endif  // __INC_HPP__