/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      21-08-2024
 * @link      https://www.codewars.com/kata/5268acac0d3f019add000203/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### The automaton should return whether we end in our accepted state (q2), or not (true/false).
 * @param cmd
 * @return true
 * @return false
 */
bool Automaton::read_commands(const vector<char> &cmd) {
  int res;
  auto test = [&res](int q1, int q2, int q3) {
    switch (res) {
      case 1:
        res = q1;
        break;
      case 2:
        res = q2;
        break;
      default:
        res = q3;
        break;
    }
  };

  for (char c : cmd) {
    if (c == '0')
      test(1, 3, 2);
    else
      test(2, 1, 2);
  }

  return res == 2;
}