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
 * @brief Construct a new BadLengthException::BadLengthException object
 * 
 * @param n 
 */
BadLengthException::BadLengthException(int n) : len(n) {};

/**
 * @brief #### !Error: Return the length of the string
 * 
 * @return int 
 */
inline int BadLengthException::what() {
  return len;
}

/**
 * @brief #### Check if the username is valid or not
 * 
 * @param username 
 * @return true 
 * @return false 
 */
bool checkUsername(string username) {
  bool isValid = true;
  int n = username.length();
  if (n < 5) {
    throw BadLengthException(n);
  }
  for (int i = 0; i < n - 1; i++) {
    if (username[i] == 'w' && username[i + 1] == 'w') {
      isValid = false;
    }
  }
  return isValid;
}