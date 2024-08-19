/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      08-08-2024
 * @link      https://www.codewars.com/kata/55b42574ff091733d900002f/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### 
 * 
 * @param input 
 * @return std::vector<std::string> 
 */
std::vector<std::string> friendOrFoe(const std::vector<std::string>& input) {
  std::vector<std::string> res{};

  // Iterate through the input vector
  for (const std::string& it : input) {
    if (it.length() == 4) {  // Add strings with exactly 4 characters to the result
      res.push_back(it);
    }
  }

  // If no 4-character strings were found, return [""] instead of an empty vector
  if (res.empty())
    return {""};

  return res;  // Return the result vector
}