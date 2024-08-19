/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      03-08-2024
 * @link      https://www.codewars.com/kata/530e15517bc88ac656000716/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Returns the string ciphered with Rot13
 * *
 * - Note: If there are numbers or special characters included in the string, they should be returned as they are.
 * @param msg
 * @return string
 */
string rot13(string msg) {
  size_t len = msg.length();
  for (int i = 0; i < len; i++) {
    if (isalpha(msg[i])) {
      if (msg[i] >= 'a')
        crypt(msg[i], 'a', 'z');
      else
        crypt(msg[i], 'A', 'Z');
    }
  }


  for (int it : msg)
    cout << it << " ";
  printf("\n");

  return msg;
}

/**
 * @brief ### Crypt to Rot13
 *
 * @param c
 * @param x
 * @param y
 */
void crypt(char &c, const char x, const char y) {
  c += 13;
  if (c > y || c < 0) {
    c -= y;
    c += x - 1;
  }
}

/*
* Other solution
std::string rot13(std::string msg)
{
  for(auto& x : msg)
    if (islower(x)) x = 'a'+(x-'a'+13)%26;
    else if(isupper(x)) x = 'A'+(x-'A'+13)%26;
  return msg;
}
*/