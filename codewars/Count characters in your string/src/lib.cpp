/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-09-29
 * @copyright Copyright (c) 2024
 * @link https://www.codewars.com/kata/52efefcbcdf57161d4000091/train/cpp codeWars @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief 
 * 
 * @param str 
 * @return map<char, unsigned> 
 */
map<char, unsigned> count(const string &str) {
  map<char, unsigned> mp;
  for (char c : str) mp[c]++;
  return mp;
}