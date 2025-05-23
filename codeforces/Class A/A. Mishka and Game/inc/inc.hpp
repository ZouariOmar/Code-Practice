/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-27
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/703/A codeForce @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part
//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using std::cout, std::endl, std::cin;

//? Class prototype declaration part
class Solution {
private:
  short n,     // The number of rounds
      m_round, // Mishka round score
      c_round, // Chris round score
      m_score, // Mishka total score
      c_score; // Chris total score
public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__