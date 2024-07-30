/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      29-07-2024
 * @link      https://www.codewars.com/kata/520b9d2ad5c005041100000f/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Move the first letter of each word to the end of it, then add "ay" to the end of the word. Leave punctuation marks untouched.
 *
 * @param str
 * @return string
 */
string pig_it(string str) {
  // Breakdown str
  stringstream s(str);

  string res = "";
  string word;
  while (s >> word) {
    if (word.size() == 1 && ispunct(word[0])) {
      // Add space & the world to the res string
      res += " " + word;
    } else {
      // Mv the first letter to the end of the string (copy)
      word.push_back(word[0]);

      // Del the first letter;
      word.erase(word.begin());

      // Add space, world & "ay" to the res string
      res += " " + word + "ay";
    }
  }

  // Del the first char of res (space)
  res.erase(res.begin());

  return res;
}

/**
 * * Or this solution
#include <regex>

std::string pig_it(std::string str) {
    return std::regex_replace(std::move(str), std::regex{"([a-zA-Z])(\\S*)"}, "$2$1ay");
}

 */