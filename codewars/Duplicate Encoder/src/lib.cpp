/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      25-07-2024
 * @link      https://www.codewars.com/kata/54b42f9314d9229fd6000d9c/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Encoding the string
 *
 * @param word
 * @return std::string
 */
std::string duplicate_encoder(const std::string& word) {
  std::unordered_map<char, int> char_count;
  std::string lower_word = word;

  // Convert to lowercase for case insensitivity
  std::transform(lower_word.begin(), lower_word.end(), lower_word.begin(), ::tolower);

  // Count occurrences of each character
  for (char c : lower_word)
    char_count[tolower(c)]++;

  std::cout << "Character count map:" << std::endl;
  for (const auto& pair : char_count) {
    std::cout << pair.first << ": " << pair.second << std::endl;
  }

  // Encode the string
  std::string res;
  for (char c : lower_word)
    (char_count[tolower(c)] == 1) ? res.push_back('(') : res.push_back(')');

  return res;
}