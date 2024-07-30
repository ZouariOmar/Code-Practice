/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      29-07-2024
 * @link      https://www.hackerrank.com/challenges/classes-objects/problem?isFullScreen=true
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Set the up io test function
 * 
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif
}

/**
 * @brief #### Input the student score
 * 
 */
void Student::input() {
  for (int i = 0; i < 5; i++)
    cin >> scores[i];
}

/**
 * @brief #### Return the sum of the student score
 * 
 * @return int 
 */
int Student::calculateTotalScore() {
  for (int i = 1; i < 5; i++)
    scores[0] += scores[i];
  
  return scores[0];
}