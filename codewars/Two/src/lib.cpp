/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      03-09-2024
 * @link      https://www.codewars.com/kata/5656b6906de340bd1b0000ac/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Return a new sorted string (alphabetical ascending), the longest possible,
 * containing distinct letters - each taken only once - coming from s1 or s2.
 * @param s1
 * @param s2
 * @return string
 */
string TwoToOne::longest(const std::string &s1, const std::string &s2) {
  set<char> dp(s1.begin(), s1.end());

  for (char it : s2)
    dp.insert(it);

  return string(dp.begin(), dp.end());
}