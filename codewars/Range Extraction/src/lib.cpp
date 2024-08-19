/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      02-08-2024
 * @link      https://www.codewars.com/kata/51ba717bb08c1cd60f00002f/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### A format for expressing an ordered list of integers is to use a comma separated list of either
 *
 * @param args
 * @return std::string
 */
std::string range_extraction(const std::vector<int> args) {
  if (args.empty()) return "";

  std::string res;
  size_t len = args.size();
  int start = 0;

  for (size_t i = 1; i <= len; ++i) {
    // If we are at the end or current number is not consecutive
    if (i == len || args[i] != args[i - 1] + 1) {
      if (i - start == 1) {  // Single number
        res += std::to_string(args[start]) + ",";
      } else if (i - start == 2) {  // Two consecutive numbers
        res += std::to_string(args[start]) + "," + std::to_string(args[start + 1]) + ",";
      } else {  // Range of at least three numbers
        res += std::to_string(args[start]) + "-" + std::to_string(args[i - 1]) + ",";
      }
      // Update start to the current index
      start = i;
    }
  }

  // Remove the trailing comma
  if (!res.empty()) {
    res.pop_back();
  }

  return res;
}
