/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      22-07-2024
 * @link      https://www.codewars.com/kata/5266876b8f4bf2da9b000362/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief takes an array containing the names of people that like an item. It must return the display text as shown in the examples:
 * *
 * []                                -->  "no one likes this"
 * *
 * ["Peter"]                         -->  "Peter likes this"
 * *
 * ["Jacob", "Alex"]                 -->  "Jacob and Alex like this"
 * *
 * ["Max", "John", "Mark"]           -->  "Max, John and Mark like this"
 * *
 * ["Alex", "Jacob", "Mark", "Max"]  -->  "Alex, Jacob and 2 others like this"
 * @param names
 * @return std::string
 */
std::string likes(const std::vector<std::string> &names) {
  switch (names.size()) {
    case 0:
      return "no one likes this";
    case 1:
      return names[0] + " likes this";
    case 2:
      return names[0] + " and " + names[1] + " like this";
    case 3:
      return names[0] + ", " + names[1] + " and " + names[2] + " like this";
    default:
      return names[0] + ", " + names[1] + " and " + std::to_string(names.size() - 2) + " others like this";
  }

  return "";
}