/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos;
 * *
 * and NO in the opposite case.
 *
 * @param x
 * @return std::string
 */
std::string is_watermelon(int x) {
  if (x % 2 || x < 2)
    return "NO";
  else
    return "YES";
}