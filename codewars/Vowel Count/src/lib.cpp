/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-09-2024
 * @link      https://www.codewars.com/kata/54ff3102c1bad923760001f3/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Return the number (count) of vowels in the given string.
 * @param inputStr const string &
 * @return int
 */
int getCount(const string& str) {
  short res{};
  string pattern{"aeiou"};

  for (char it : str)
    if (find(pattern.begin(), pattern.end(), it) != pattern.end()) res++;

  return res;
}

/*
* Other solution

int getCount(const std::string& str) {
  return std::count_if(str.begin(), str.end(), [](int i) {
    return i == 'a' || i == 'e' || i == 'i' || i == 'o'|| i == 'u';
  });
}
*/