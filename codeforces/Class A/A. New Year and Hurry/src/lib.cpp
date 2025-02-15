/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-11
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/750/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution()
    : max_problems(0), contest_time(0) {
  cin >> usr.first >> usr.second;  // take n and k inputs
}

/**
 * @brief ### Print the solution
 */
void Solution::solve() {
  int remaining_time = FOUR_HOURS_MINUTES - usr.second;  // Time left after traveling to the party

  for (size_t i = 1; i <= usr.first; ++i) {
    contest_time += i * PROBLEM_MINUTES;       // Time to solve the i-th problem
    if (contest_time > remaining_time) break;  // No more time left for additional problems
    max_problems = i;                          // Update max problems if there is enough time
  }

  cout << max_problems << endl;
}