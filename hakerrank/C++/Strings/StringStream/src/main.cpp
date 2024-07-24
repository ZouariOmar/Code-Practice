/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-07-2024
 * @link      https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?isFullScreen=true
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
  string str;
  cin >> str;

  vector<int> integers = parseInts(str);
  for (int i = 0; i < integers.size(); i++) {
    cout << integers[i] << "\n";
  }

  return 0;
}