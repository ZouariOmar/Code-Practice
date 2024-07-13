/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/number-of-days-between-two-dates
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Write a program to count the number of days between two dates.
 * The two dates are given as strings, their format is YYYY-MM-DD as shown in the examples.
 * @param date1
 * @param date2
 * @return int
 */
int Solution::daysBetweenDates(string date1, string date2) {
  return abs(date_to_int(date2) - date_to_int(date1));
}

int Solution::date_to_int(string s_date) {
  int Y = stoi(s_date.substr(0, 4));
  int M = stoi(s_date.substr(5, 2));
  int D = stoi(s_date.substr(8, 2));

  int date = 0;
  for (int y = 1971; y < Y; ++y) date += is_leap_year(y) ? 366 : 365;
  for (int m = 1; m < M; ++m) date += days_in_month(m, Y);
  return date + D;
}

bool Solution::is_leap_year(int year) {
  return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int Solution::days_in_month(int m, int year) {
  if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) return 31;
  if (m == 2) return is_leap_year(year) ? 29 : 28;
  return 30;
}
