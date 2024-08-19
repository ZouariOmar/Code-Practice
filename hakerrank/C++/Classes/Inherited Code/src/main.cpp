/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      dd-mm-yyyy
 * @link      NONE
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
  int T;
  cin >> T;
  while (T--) {
    string username;
    cin >> username;
    try {
      bool isValid = checkUsername(username);
      if (isValid) {
        cout << "Valid" << '\n';
      } else {
        cout << "Invalid" << '\n';
      }
    } catch (BadLengthException e) {
      cout << "Too short: " << e.what() << '\n';
    }
  }
  return 0;
}