/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-25
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1703/C codeforces @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//? Class prototype declaration part
class Solution {
private:
  unsigned short t, // Number of test cases (1 ≤ t ≤ 100)
      n,            // Number of wheels (1 ≤ n ≤ 100)
      nbr_moves;    // Number of moves
  char move;        // Move type (up/down)
  short *digits;    // Wheel after all moves have been performed (0 ≤ digits(i) ≤ 9)

  void mvDown(short &) const;
  void mvUp(short &) const;

public:
  Solution();
  ~Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__ Or __INC_H__