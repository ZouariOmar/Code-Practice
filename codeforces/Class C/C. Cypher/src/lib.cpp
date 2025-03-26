/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-25
 * @copyright Copyright (c) 2025
 * @link https://codeforces.com/problemset/problem/1703/C codeforces @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @fn    Solution::Solution()
 * @brief Construct a new Solution::Solution object
 */
Solution::Solution()
    : digits(nullptr) {
  std::cin >> t;
}

/**
 * @fn    Solution::~Solution()
 * @brief Destroy the Solution::Solution object
 */
Solution::~Solution() {
  delete digits;
  digits = nullptr;
}

/**
 * @fn      Solution::mvUp(short &) const
 * @brief   Increment `x` by `1`, and range `x` between `0` and `9`
 * @param x {short &}
 * @return  void
 */
void Solution::mvDown(short &x) const {
  (x == 0) ? x = 9 : x--;
}

/**
 * @fn      Solution::mvDown(short &) const
 * @brief   Decrement `x` by `1`, and range `x` between `0` and `9`
 * @param x {short &}
 * @return  void
 */
void Solution::mvUp(short &x) const {
  (x == 9) ? x = 0 : x++;
}

/**
 * @fn    Solution::solve()
 * @brief Print solution in console
 */
void Solution::solve() {
  while (t--) {
    std::cin >> n;
    digits = new short[n];
    for (short i{}; i < n; i++) // We have digits
      std::cin >> digits[i];
    for (short i{}; i < n; i++) {
      std::cin >> nbr_moves;
      while (nbr_moves--) {
        std::cin >> move;
        (move == 'D') ? mvUp(digits[i]) : mvDown(digits[i]);
      }
    }
    for (short i{}; i < n; i++)
      std::cout << digits[i] << " ";
    std::cout << '\n';
  }
}