/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-01
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1985/A codeforce @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using std::cout, std::endl, std::cin, std::string, std::swap;

//? Class prototype declaration part
class Solution {
private:
  short t;     // Number of test cases (1 ≤ t ≤ 100)
  string a, b; // `a` and `b` input strings, both of length 3. The strings only contain lowercase Latin letters.
public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__