/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      22-08-2024
 * @link      https://www.hackerrank.com/challenges/cpp-maps/problem?isFullScreen=true
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Set the up io test function
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif
}
/**
 * @brief #### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> len;
}

void Solution::list() {
  int type;
  string str;
  int mark;
  while (len--) {
    cin >> type;
    switch (type) {
      case 1:
        cin >> str >> mark;
        mp[str] += mark;
        break;

      case 2:
        cin >> str;
        mp[str] = 0;
        break;

      case 3:
        cin >> str;
        cout << mp[str] << endl;
        break;

      default:
        break;
    }
  }
}