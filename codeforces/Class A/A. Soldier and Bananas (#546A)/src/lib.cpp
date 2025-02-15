/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      17-08-2024
 * @link      https://codeforces.com/problemset/problem/546/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Construct a new Solution::Solution object
 */
Solution::Solution() {
  // Take the usr input
  cin >> cost >> amount >> nbr;
}

/**
 * @brief #### Print the amount of dollars that the soldier must borrow from his friend. If he doesn't have to borrow money, output 0.
 */
void Solution::borrow() {
  int total_cost{};

  for (int i = 1; i <= nbr; i++)
    total_cost += cost * i;
  
  int res = total_cost - amount;

  if (res <= 0)
    cout << 0 << endl;
  else
    cout << res << endl;
}