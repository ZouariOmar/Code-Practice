/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/valid-parentheses
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief determine if the input string is valid (see @link)
 * @param s
 * @return true
 * @return false
 */
bool Solution::isValid(string s) {
  map<char, char> mp = {
    {'(', ')'},
    {'[', ']'},
    {'{', '}'}
  };

  // check if the s var is ODD --> false or EVEN --> true
  if (s.size() & 1)
    return false;
  else {
    for (int i = 0; i < s.size() - 1; i += 2) {
      if (s[i] == mp[s[i + 1]])
        return false;
    }
  }
  return true;
}