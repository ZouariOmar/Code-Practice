/***************************************************
 * @file      main.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-08-2024
 * @link      https://www.codewars.com/kata/5526fc09a1bbd946250002dc/train/c
 * @copyright Copyright (c) 2024
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.c"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------

/**
 * @brief # Main Program function
 * @return int 
 */
int main() {
  //* principal vars declaration part
  const int arr[] = {4, 1, 1};

  printf("%d\n", find_outlier(arr, 3));

  return 0;
}
