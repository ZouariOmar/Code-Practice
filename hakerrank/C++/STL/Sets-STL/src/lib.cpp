/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      12-08-2024
 * @link      https://www.hackerrank.com/challenges/cpp-sets/problem?isFullScreen=true
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Set the up io test method
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
  cin >> n;
}

/**
 * @brief #### Do the next query:
 * *
 * - Add an element to the set.
 * *
 * - Delete an element from the set. (If the number is not present in the set, then do nothing).
 * *
 * - If the number is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).
 */
void Solution::setter() {
  while (n) {
    cin >> q >> tmp;
    switch (q) {
      // Insert an element to the set
      case 1:
        holder.insert(tmp);
        break;

      // Del an element from the set
      case 2:
        holder.erase(tmp);
        break;

      // Check the existence of an element
      case 3:
        (holder.find(tmp) != holder.end()) ? cout << "Yes" << endl : cout << "No" << endl;
        break;

      default:
        break;
    }
    n--;
  }
}