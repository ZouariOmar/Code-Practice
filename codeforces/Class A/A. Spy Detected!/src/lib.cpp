/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-28
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1512/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> n;  // Take the sizeof the array
  for (short i{}; i < n; i++) {
    short holder;
    cin >> holder;
    (!mp[holder]) ? mp[holder] = i + 1 : mp[holder] = -1;
  }
}

/**
 * @brief ### Print solution in console
 */
void Solution::solve() {
  for (unordered_map<short, short>::iterator it = mp.begin(); it != mp.end(); ++it)
    if (it->second != -1) cout << it->second << endl;
}

/**
 * @brief ### Setup i/o test
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("test/in.txt", "r", stdin);
#endif  // __TEST__
}