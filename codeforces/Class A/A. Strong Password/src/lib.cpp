/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-24
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1997/A codeforces @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"  

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 * 
 * @class Solution
 */
Solution::Solution() {
  std::cin >> t;
}

/**
 * @brief ### Get any char except the passed char
 * 
 * @details Helper fn
 * @class   Solution
 * @param c {const char &}
 * @return  char 
 */
char Solution::genExcept(const char &c) const {
  return (c == 'z') ? 'a' : c + 1;
}

/**
 * @brief ### Print solution in console
 * 
 * @class Solution
 */
void Solution::solve() {
  while (t--) {
    std::cin >> s;
    std::string new_string{s};
    for (size_t i{}, len{new_string.length()}; i < len - 1; i++)
      if (new_string[i] == new_string[i + 1]) {
        new_string.insert(new_string.begin() + i + 1, genExcept(new_string[i]));
        break;
      }
    std::cout << ((new_string != s) ? new_string : s + genExcept(*(s.end() - 1))) << '\n';
  }
}