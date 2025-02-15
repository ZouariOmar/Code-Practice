/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      19-09-2024
 * @link      https://codeforces.com/problemset/problem/228/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------
/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  size_t i{};
  while (i < 4) {
    int x;
    cin >> x;
    ump[x]++;
    i++;
  }

  it = ump.begin();
}

/**
 * @brief ### determine what is the minimum number of horseshoes he needs to buy to wear four horseshoes of different colors to a party.
 */
void Solution::solve() {
  int res{};
  while (it != ump.end()) {
    res += it->second - 1;
    it++;
  }

  cout << res << endl;
}