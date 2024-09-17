/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      11-09-2024
 * @link      https://www.codewars.com/kata/62f17be8356b63006a9899dc/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief
 * *
 * - Input is a string of three chars from the set
 * *
 * - 'D', 'F', 'I', 'K'; output is a single char from this set
 * @param group
 * @return char
 */
char trilingual_democracy(std::string &group) {
  if (group[0] == group[1] == group[2]) return group[0];
  if (group[0] == group[1]) return group[2];
  if (group[1] == group[2]) return group[0];
  if (group[0] == group[2]) return group[1];

  // Find the remaining fourth language that isn't in the group
  std::string languages = "DFIK";
  for (char lang : languages)
    if (group.find(lang) == std::string::npos)
      return lang;  // Return the language not spoken by anyone

  return ' ';
}

/*
* other solution
char trilingual_democracy( const std::string& group ) {
  return group[ 0 ] xor group[ 1 ] xor group[ 2 ];
}
*/