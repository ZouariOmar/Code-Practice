/**
 * @file main.c
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-30
 * @copyright Copyright (c) 2024
 * @linkhttps://www.codewars.com/kata/56eb0be52caf798c630013c0/train/c codeWars @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.h"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main() {
  printf("%d", unlucky_days(1986));
  return 0;
}

/**
 * @brief ### Find the number of Friday 13th in the given year
 * @param year int
 * @return int
 */
int unlucky_days(int year) {
  int black_fridays = 0;
  struct tm date = {0};  // Initialize all fields to zero

  // Set the year
  date.tm_year = year - 1900;  // `tm_year` is years since 1900

  for (int month = 0; month < 12; month++) {
    date.tm_mon = month;  // Set the month
    date.tm_mday = 13;    // Set the day to 13th

    // Normalize the date struct and get weekday
    mktime(&date);

    // Check if the day is Friday (5 in struct tm, as 0=Sunday, 6=Saturday)
    if (date.tm_wday == 5)
      black_fridays++;
  }

  return black_fridays;
}

/*
* Other solution
#include <time.h>
#define FRIDAY_TM_WDAY 5
int unlucky_days(int year) {
   int count = 0;
   for (int i = 0; i < 12; i++) {
      struct tm unld = {.tm_year = year - 1900, .tm_mon = i, .tm_mday = 13};
      mktime(&unld);
      if (unld.tm_wday == FRIDAY_TM_WDAY) count++;
   }
   return count;
}
*/

/*
* Other solution
int unlucky_days(int year) {
  return "1221212213113213122221122131122121221311321312222112213112212122131132131222211221311221212213113213112213113213122221122131122121221311321312222112213112212122131132131222211221311221212213113213122213113213122221122131122121221311321312222112213112212122131132131222211221311221212213113213122221122213122221122131122121221311321312222112213112212122131132131222211221311221212213113213122221122131"[year % 400] - '0';
}
*/