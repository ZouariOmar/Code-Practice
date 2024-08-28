/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      22-08-2024
 * @link      https://www.codewars.com/kata/55a29405bc7d2efaff00007c/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Calculate (1 / n!) * (1! + 2! + 3! + ... + n!) for a given n, where n is an integer greater or equal to 1.
 * @param n
 * @return double
 */
double Suite::going(int n) {
  long double sum = 1.0;               // Start with the smallest term, 1/n!
  long double currentFactorial = 1.0;  // This will hold (n! / n!), which is 1

  for (int i = n; i > 1; --i) {
    currentFactorial /= i;    // Divide by i to move towards (i-1)!
    sum += currentFactorial;  // Add the next term in the series
  }

  return static_cast<double>(sum);  // Cast to double for the final result
}

/*
* Other solution
#include <cmath>

class Suite
{
public:
  static double going(int n);
};

double Suite::going(int n)
{
    double res = 1.0, inter = 1.0;
    for (int i = n; i >= 2; i--)
    {
        inter = inter * (1.0 / i);
        res += inter;
    }
    return std::floor(res * std::pow(10, 6)) / std::pow(10, 6);
}
 */