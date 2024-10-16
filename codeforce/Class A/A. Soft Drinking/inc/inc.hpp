/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-14
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/151/A codeForce @endlink
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

/**
 * ? Note:
 * * 1 Toast = nl + 1 lime slice + np
 */

class Solution {
 private:
  int n,   // Number of friends
      k,   // Number of soft drink bottles
      l,   // Sizeof each soft drink bottle (by ml)
      c,   // Number of limes
      d,   // Slices limes number
      p,   // Size of founded salts (by grams)
      nl,  // Sizeof soft drink that every friend need it
      np;  // Sizeof salts that every friend need it
 public:
  Solution();
  void solve();
};  // Solution class

#endif