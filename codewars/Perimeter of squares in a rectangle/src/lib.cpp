/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      19-08-2024
 * @link      https://www.codewars.com/kata/559a28007caad2ac4e000083/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

ull SumFct::perimeter(int a) {
  ull sum{2};  // Start with F(1) = 1 + F(2) = 1
  ull a1{1}, a2{1}, fib_n{};

  // Calculate the sum for Fibonacci numbers from F(3) to F(a+1)
  for (int i = 2; i <= a; ++i) {
    fib_n = a1 + a2;
    sum += fib_n;
    a1 = a2;
    a2 = fib_n;
  }

  return sum * 4;
}