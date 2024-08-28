/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      20-08-2024
 * @link      https://www.codewars.com/kata/52b757663a95b11b3d00062d/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Returns the same string with all even indexed characters in each word upper cased,
 * and all odd indexed characters in each word lower cased.
 * @param str
 * @return std::string
 */
std::string to_weird_case(std::string_view str) {
  std::string result(str);  // Create a modifiable copy of the string view
  int i = 0;
  std::transform(result.begin(), result.end(), result.begin(), [&i](char a) -> char {
    if (std::isspace(a)) i = 1;
    char new_char = (!(i & 1)) ? std::toupper(a) : std::tolower(a);
    i++;
    return new_char;
  });
  return result;
}