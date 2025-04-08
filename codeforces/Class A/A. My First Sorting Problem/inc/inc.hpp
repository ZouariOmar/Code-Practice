/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-05
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1971/A codeforces @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part
//* Include std headers (c++)
#include <iostream>

//? Custom Pre-Processor prototype declaration part
#define PRINT(x, y) std::cout << std::min(x, y) << " " << std::max(x, y) << '\n'

//? Class(es) prototype declaration part
class Solution {
private:
  short t, // Number of test cases
      x, y;

public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__