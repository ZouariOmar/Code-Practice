/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      01-08-2024
 * @link      https://codeforces.com/problemset/problem/236/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Construct a new Solution::Solution object
 * 
 */
Solution::Solution() {
  std::cin >> name;
}

/**
 * @brief #### Return true if it's a boy, false if it's male
 * 
 * @return true 
 * @return false 
 */
bool Solution::girl_or_boy() {
  std::unordered_set<char> set;

  // Eliminate the duplicate characters from `name`
  for (char it : name)
    set.insert(it);

  return set.size() & 1;
}