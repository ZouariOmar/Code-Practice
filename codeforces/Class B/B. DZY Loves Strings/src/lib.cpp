/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-28
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/447/B codeforces @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @fn    Solution::Solution()
 * @brief Construct a new Solution::Solution object
 */
Solution::Solution() {
  std::cin >> s >> k;
}

/**
 * @fn     Solution::getMaxWc()
 * @brief  Retrun the maximum integer from `w` array
 * @return int
 */
int Solution::getMaxWc() {
  int result{-1};
  for (unsigned short i{}; i < 26; i++) {
    std::cin >> w[i];
    result = std::max(result, w[i]);
  }
  return result;
}

/**
 * @fn    Solution::solve()
 * @brief Print solution in console
 */
inline void Solution::solve() {
  int max_char_score{getMaxWc()},
      result{};
  for (unsigned int i{}; i < s.size(); i++)
    result += (i + 1) * w[s[i] - 'a'];
  for (unsigned int i = s.size() + 1; i < s.size() + k + 1; i++)
    result += i * max_char_score;
  std::cout << result << '\n';
}