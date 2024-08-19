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
 * @brief ### Construct a new Factorial::Factorial object
 */
Factorial::Factorial() {
  cin >> x;
}

/**
 * @brief 
 * 
 * @return int 
 */
int Factorial::calculateFact() {
  if (x == 1) return 0;

  int res{x};

  while (x > 1) {
    res *= (x - 1);

    x--;
  }

  return res;
}

/**
 * @brief 
 * 
 */
void Factorial::printFac() {
  cout << calculateFact() << endl;
}