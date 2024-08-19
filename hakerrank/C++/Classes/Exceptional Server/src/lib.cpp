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

int Server::load = 0;

int Server::getLoad() {
  return load;
}

int Server::compute(long long A, long long B) {
  load += 1;
  if (A < 0) {
    throw std::invalid_argument("A is negative");
  }
  vector<int> v(A, 0);
  int real = -1, cmplx = sqrt(-1);
  if (B == 0) throw 0;
  real = (A / B) * real;
  int ans = v.at(B);
  return real + A - B * ans;
}