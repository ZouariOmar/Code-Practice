/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      29-08-2024
 * @link      https://www.codewars.com/kata/52fba66badcd10859f00097e/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Return a new string with all vowels removed.
 * *
 * - #### vowels: a, e, i, o, u
 * @param str
 * @return std::string
 */
std::string disemvowel(const std::string& str) {
  std::string res = "";
  std::string vowels = "aeiou";
  
  for (char it : str)
    if (std::none_of(vowels.begin(), vowels.end(), [it](char v) { return tolower(it) == v; }))
      res.push_back(it);

  return res;
}

/*
* Other solution
# include <regex>
# include <string>
std::string disemvowel(std::string str)
{
  std::regex vowels("[aeiouAEIOU]");
  return std::regex_replace(str, vowels, "");
}
*/