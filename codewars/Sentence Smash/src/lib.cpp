/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-26
 * @copyright Copyright (c) 2024
 * @link https://www.codewars.com/kata/53dc23c68a0c93699800041d/train/cpp codeWars @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"  

//? Function/Class prototype dev part

/**
 * @brief ### Takes an array of words and smashes them together into a sentence and returns the sentence.
 * @param words vector<string> &
 * @return string
 */
string smash(const vector<string> &words) {
  if (words.empty()) return "";
  string res = "";
  size_t len{words.size()};
  for (size_t i{}; i < len; ++i)
    res += words[i] + ' ';
  res.erase(res.size() - 1);  // Del the last space
  return res;
}

/*
* Other solution
std::string smash( const std::vector< std::string >& words ) {
  if ( words.empty() ) return {};
  std::string sentence;
  for ( const auto& word : words ) sentence += word + ' ';
  return sentence.pop_back(), sentence;
}
*/