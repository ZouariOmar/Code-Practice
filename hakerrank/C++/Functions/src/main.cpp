/***************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------

/**
 * @brief The main program fn
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char const *argv[]) {
  //* principal vars declaration part
  int a, b, c, d;

  // Take the usr input
  scanf("%d %d %d %d", &a, &b, &c, &d);

  // Hold and show the result
  int ans = max_of_four(a, b, c, d);
  printf("%d", ans);

  return 0;
}
