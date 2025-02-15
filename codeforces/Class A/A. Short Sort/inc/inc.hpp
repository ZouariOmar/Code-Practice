/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-30
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1873/A codeForce @endlink
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
  unsigned char t; // Number of test cases
  string word;     // string consisting of each of the three characters a, b, and c exactly once, representing the cards.
public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__