/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      02-08-2024
 * @link      https://www.interviewbit.com/problems/majority-element
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
  Solution sl;
  vector<int> arr = {2, 1, 2};

  cout << sl.majorityElement(arr) << endl;

  return 0;
}