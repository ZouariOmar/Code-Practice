/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      25-09-2024
 * @link      https://www.codewars.com/kata/5966eeb31b229e44eb00007a/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Converts any sentence into a V A P O R W A V E sentence
 * @param str `const string`
 * @return string
 */
string vaporcode(const string &str) {
  string res = "";
  size_t len{str.size()};
  for (size_t i{}; i < len; ++i) {
    if (str[i] == ' ') continue;
    (isalpha(str[i])) ?  res += toupper(str[i]) : res += str[i];
    res += "  ";
  }

  while (!res.empty() && res.back() == ' ') res.pop_back();

  return res;
}

/*
* Other solution
string vaporcode(const string &str) {
  string result;
  for (auto ch : str)
  {
    if (ch != ' ')
    {
      result += toupper(ch);
      result += "  ";
    }
  }
  return result.substr(0, result.length() - 2);
}
*/