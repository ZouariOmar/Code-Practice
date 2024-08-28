/***************************************************
 * @file      lib.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      28-08-2024
 * @link      https://www.codewars.com/kata/52685f7382004e774f0001f7/train/c
 * @copyright Copyright (c) 2024
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.h"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

char *human_readable_time(unsigned seconds, char *time_string) {
  *time_string = '\0';  // write to time_string
  int mm = seconds / 60,
      hh = mm / 60,
      ss = seconds % 60;
  while (ss > 59) ss %= 60;
  while (mm > 59) mm %= 60;
  sprintf(time_string, "%02u:%02u:%02u", hh, mm, ss);
  return time_string;  // return it
}

/*
* Other solution
char *human_readable_time(unsigned seconds, char *time_string) {
  sprintf(time_string, "%02u:%02u:%02u", seconds / 3600, seconds / 60 % 60, seconds % 60);
  return time_string;
}
*/