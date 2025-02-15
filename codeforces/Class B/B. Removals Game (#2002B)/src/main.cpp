/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      22-08-2024
 * @link      https://codeforces.com/problemset/problem/2002/B
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------

/**
 * @brief # The Main Program Function
 * @return int 
 */
int main() {
  //! Testing part
  setup_io_test();

  //* principal vars declaration part
  int tests;
  cin >> tests;

  while (tests--) {
    Solution sl;
    sl.winner();
  }

  return 0;
}