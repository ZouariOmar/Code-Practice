/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      17-08-2024
 * @link      https://www.hackerrank.com/challenges/virtual-functions/problem?isFullScreen=true
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
  int n, val;
  cin >> n;  // The number of objects that is going to be created.
  Person *per[n];

  for (int i = 0; i < n; i++) {
    cin >> val;
    if (val == 1) {
      // If val is 1 current object is of type Professor
      per[i] = new Professor;

    } else
      per[i] = new Student;  // Else the current object is of type Student

    per[i]->getdata();  // Get the data from the user.
  }

  for (int i = 0; i < n; i++)
    per[i]->putdata();  // Print the required output for each object.

  return 0;
}