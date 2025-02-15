/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief The helper project file
 * @version 0.1
 * @date 2024-09-28
 * @copyright Copyright (c) 2024
 */

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> n;
}

/**
 * @brief ### Print the problem result
 */
void Solution::solve() {
  lli res{};
  int div[] = {100, 20, 10, 5, 1};
  size_t i{};

  while (n) {
    res += n / div[i];
    n %= div[i];
    i++;
  }

  cout << res << endl;
}