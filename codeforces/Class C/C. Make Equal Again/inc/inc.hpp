/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-29
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1931/C codeforces @endlink
 */

// ? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

// ? Include prototype declaration part

// * Include std headers (c++)
#include <iostream>
#include <vector>

// ? Class(es) prototype declaration part
class Solution {
private:
  size_t t;             // Number of test cases
  int n;                // Length of the array
  std::vector<int> arr; // Given array

public:
  Solution();
  void solve();
}; // Solution class

#endif // __INC_HPP__