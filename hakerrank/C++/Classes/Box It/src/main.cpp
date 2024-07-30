/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      30-07-2024
 * @link      https://www.hackerrank.com/challenges/box-it/problem?isFullScreen=true
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------

/**
 * @brief # The Main Program Function
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char const *argv[]) {
  //* principal vars declaration part
  Box b(1, 2, 3);
  Box c(4, 0, 0);

  cout << b.CalculateVolume() << endl;
  cout << c.CalculateVolume() << endl;
  cout << (c < b) << endl;
  cout << c;

  return 0;
}