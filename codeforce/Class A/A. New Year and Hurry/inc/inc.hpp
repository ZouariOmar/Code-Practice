/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-11
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/750/A codeForce @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__
#define FOUR_HOURS_MINUTES 240
#define PROBLEM_MINUTES 5

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part

class Solution {
 private:
  int max_problems,              // Result
      contest_time;              // Total time of the contest
  pair<unsigned, unsigned> usr;  // usr.first --> n(number of problems) and usr.second --> k(time from house to party)

 public:
  Solution();
  void solve();
};  // Solution class

#endif