/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-09
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/427/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> len;
  for (size_t i{}; i < len; i++) {
    int usr;
    cin >> usr;
    arr.push_back(usr);
  }
}

/**
 * @brief ### Print the number of crimes which will go untreated.
 */
void Solution::solve() {
  for (int it : arr) {
    switch (it) {
      case -1:
        if (!police_station.first)
          police_station.second++;
        else
          police_station.first--;
        break;
      default:
        police_station.first += it;
        break;
    }
  }

  cout << police_station.second << endl;
}

/**
 * @brief ### Setup io test function
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif
}