/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-04
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1873/C codeforces @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 *
 * @class Solution
 */
Solution::Solution() {
  std::cin >> t;
}

/**
 * @brief ### Print solution in console
 *
 * @class Solution
 */
void Solution::solve() {
  while (t--) {
    std::vector<std::string> grid(10);
    for (short i{}; i < RING_SIZE; i++) // Hold the grid
      cin >> grid[i];

    short totalScore{};
    for (short i{}; i < RING_SIZE; i++)
      for (short j{}; j < RING_SIZE; j++)
        if (grid[i][j] == 'X')
          totalScore += getScore(i, j);
    std::cout << totalScore << std::endl;
  }
}

/**
 * @brief ### Helper function
 *
 * @class     Solution
 * @param row {short &}
 * @param col {short &}
 * @return    int
 */
int Solution::getScore(short &row, short &col) {
  int minDist = min({row, col, (short)(9 - row), (short)(9 - col)}); // Minimum distance from an edge
  return minDist + 1;                                                // Convert distance to point value
}

/**
 * @brief ### Setup i/o fn
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif // __TEST__
}