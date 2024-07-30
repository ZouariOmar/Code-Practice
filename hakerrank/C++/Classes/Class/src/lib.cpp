/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      28-07-2024
 * @link      https://www.hackerrank.com/challenges/c-tutorial-class/problem?isFullScreen=true
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief Set the up io test function
 * 
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif
}

/**
 * @brief #### Set the age value
 *
 * @param x
 */
void Student::set_age(int x) {
  age = x;
}

/**
 * @brief #### Set the first name value
 *
 * @param x
 */
void Student::set_first_name(string str) {
  f_name = str;
}

/**
 * @brief #### Set the last name value
 *
 * @param x
 */
void Student::set_last_name(string str) {
  l_name = str;
}

/**
 * @brief #### Set the standard value
 *
 * @param x
 */
void Student::set_standard(int x) {
  standard = x;
}

/**
 * @brief #### Get the age value
 *
 * @return int
 */
inline int Student::get_age() {
  return age;
}

/**
 * @brief #### Get the last name value
 *
 * @return int
 */
inline string Student::get_last_name() {
  return l_name;
}

/**
 * @brief #### Get the first name value
 *
 * @return int
 */
inline string Student::get_first_name() {
  return f_name;
}

/**
 * @brief #### Get the standard value
 *
 * @return int
 */
inline int Student::get_standard() {
  return standard;
}