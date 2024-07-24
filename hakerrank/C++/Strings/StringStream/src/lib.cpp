/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-07-2024
 * @link      https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?isFullScreen=true
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Breakdown the string and convert it's element to `int`
 * 
 * @param str 
 * @return vector<int> 
 */
vector<int> parseInts(string str) {
  size_t len = str.size();
  for (int i = 0; i < len; i++)
    if (str[i] == ',')
      str[i] = ' ';

  stringstream ss(str);
  vector<int> res;

  string tmp;
  while (ss >> tmp) {
    res.push_back(stoi(tmp));
  }

  return res;
}