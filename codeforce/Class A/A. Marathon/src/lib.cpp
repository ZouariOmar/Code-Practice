/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-27
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1692/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> t;
}

/**
 * @brief ### Print the solution in the console
 */
void Solution::solve() {
  while (t--) {
    short in_front{}, other_participants = 3;
    cin >> Timur;
    while (other_participants--) {
      int participant;
      cin >> participant;                 // Take the distance of the participant
      in_front += (participant > Timur);  // Increase the `in_front` var if the participant in front of Timur
    }
    cout << in_front << endl;  // Print the solution
  }
}

/**
 * @brief Setup i/o test
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif  // __TEST__
}