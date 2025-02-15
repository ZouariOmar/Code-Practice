/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-27
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/703/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution()
    : m_score(0), c_score(0) {
  cin >> n;
}

/**
 * @brief ### Print solution in console
 */
void Solution::solve() {
  while (n--) {
    cin >> m_round >> c_round;
    if (m_round > c_round)
      m_score++;
    else if (m_round < c_round)
      c_score++;
  }
  if (m_score > c_score)
    cout << "Mishka" << endl;
  else if (m_score < c_score)
    cout << "Chris" << endl;
  else
    cout << "Friendship is magic!^^" << endl;
}