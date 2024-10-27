/**
 * @file main.c
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-27
 * @copyright Copyright (c) 2024
 * @link https://www.codewars.com/kata/56b1f01c247c01db92000076/train/c codeWars @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.h"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main() {
  printf("%s", double_char("String", ""));
  return 0;
}

/**
 * @brief ### Return a string in which each character (case-sensitive) is repeated once.
 * @param string const char *
 * @param doubled char *
 * @return char *
 */
char *double_char(const char *string, char *doubled) {
  size_t len = strlen(string);

  for (size_t i = 0, j = 0; i < len; i++) {
    doubled[j++] = string[i];
    doubled[j++] = string[i];
  }
  doubled[len * 2] = '\0';  // Null-terminate the string

  return doubled;
}
