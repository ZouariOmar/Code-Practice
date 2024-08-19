/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      31-07-2024
 * @link      https://www.codewars.com/kata/5541f58a944b85ce6d00006a/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Return the fibonacci number of `n`
 * @param n
 * @return int
 */
ull ProdFib::fib(int n) {
  if (n <= 1)
    return n;
  return fib(n - 1) + fib(n - 2);
}

/**
 * @brief #### Search two Fibonacci numbers F(n) and F(n+1) verifying `F(n) * F(n+1) = prod`
 * @param prod
 * @return vector<ull>
 */
vector<ull> ProdFib::productFib(ull prod) {
  for (int i = 0; i < prod - 1; i++) {
    ull f1 = fib(i), f2 = fib(i + 1), op = f1 * f2;
    if (op == prod)
      return {f1, f2, true};
    if (op > prod)
      return {f1, f2, false};
  }

  return {};
}

/*
* Or this solution
#include <vector>
typedef unsigned long long ull;
class ProdFib
{
public:
  static std::vector<ull> productFib(ull prod)
  {
  		ull a = 0, b = 1;
      while (a * b < prod) {
      		std::swap(a, b);
          b += a;
      }
      return {a, b, ((a*b == prod) ? true : false)};
  }
};
*/