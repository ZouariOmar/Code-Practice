/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-28
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1512/A codeForce @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part
//* Include std libs (c++)
#include <iostream>
#include <unordered_map>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class Solution {
 private:
  short n;                         // Size of the array (3 ≤ n ≤ 100)
  unordered_map<short, short> mp;  // Map to store the variable with her index (Note: We only need the index of the spy-var)
 public:
  Solution();    // Solution constructor
  void solve();  // Main Solution function
};  // Solution class
#endif  // __INC_HPP__