/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      30-07-2024
 * @link      https://www.codewars.com/kata/546f922b54af40e1e90001da/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief Construct a new Transform::Transform object
 *
 */
Transform::Transform() {
  getline(cin, str);
}

/**
 * @brief #### Replace every letter with its position in the alphabet
 *
 * @return string
 */
string Transform::to_alpha_pos() {
  // Return "1" if the string was empty
  if (str.empty())
    return "";

  // Main fn
  string res{};
  for (char it : str)
    if (isalpha(it))
      res += to_string((tolower(it) - 96)) + " ";
  
  // Del the last space
  if (!res.empty())
    res.pop_back();

  return res;
}

/*
* -- Solution in Python --
def alphabet_position(text):
  alp = "abcdefghijklmnopqrstuvwxyz"
  return " ".join([str(alp.find(c) + 1) for c in text.lower() if c in alp])
*/