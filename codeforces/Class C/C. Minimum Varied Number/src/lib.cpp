/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-20
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1714/C codeforces @endlink
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
 * @brief ### Print the solution in console
 * 
 * @class Solution
 */
inline void Solution::solve() {
  while (t--) {
    std::cin >> s;
    std::string result;
    short init{9};
    while (s > 0) {
      if (s - init < 0) {
        init--;
        continue;
      }
      s -= init;
      result = std::to_string(init) + result;
      init--;
    }
    std::cout << result << std::endl;
  }
}