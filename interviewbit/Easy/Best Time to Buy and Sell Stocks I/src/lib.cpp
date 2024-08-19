/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      dd-mm-yyyy
 * @link      NONE
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Return the maximum possible profit
 *
 * @param A
 * @return int
 */
int Solution::maxProfit(const std::vector<int>& A) {
  if (A.empty()) return 0;

  int minPrice = A[0];  // Initialize minPrice with the first price
  int maxProfit = 0;    // Initialize maxProfit to 0

  for (size_t i = 1; i < A.size(); ++i) {
    // Update minPrice to the minimum price seen so far
    minPrice = std::min(minPrice, A[i]);

    // Calculate profit if we sold at the current price
    int profit = A[i] - minPrice;

    // Update maxProfit if this profit is better than the previous maximum
    maxProfit = std::max(maxProfit, profit);
  }

  return maxProfit;
}