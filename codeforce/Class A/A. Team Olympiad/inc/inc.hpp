/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-22
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/490/A codeForce @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part
//* Include std libs (c++)
#include <iostream>
#include <vector>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class Solution {
 private:
  size_t n,                            // The number of children in the school (1 ≤ n ≤ 5000)
      w;                               // The maximum number of teams that the school will be able to present at the Olympiad
  vector<int> programming, maths, pe;  // A vectors to describe the skills of the i-th child

 public:
  Solution();
  void solve();
};  // Solution class

#endif  // __INC_HPP__