/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-28
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1343/B codeForce @endlink
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

/**
 * ? Constraints
 * - All elements of `a` are distinct and positive
 * - `n` is even
 * - The sum of `n` over all test cases does not exceed `2 * 10^5`
 */

//? Class prototype declaration part
class Solution {
private:
  int t, // Numer of test cases
      n; // Input integer - n > 1 and n % 2 = 0
public:
  Solution();
  void solve();
}; // Solution class
#endif // __INC_HPP__