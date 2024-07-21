/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://www.codewars.com/kata/517abf86da9663f1d2000003/train/cpp
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

std::string to_camel_case(std::string text) {
  int i = 0;
  size_t len = text.size();

  while (i < len) {
    if (text[i] == '-' || text[i] == '_') {
      // Del the special char
      text.erase(text.begin() + i);

      // Make the char uppercase
      if (text[i] > 'a')
        text[i] -= 32;
    }
    i++;
  }

  return text;
}