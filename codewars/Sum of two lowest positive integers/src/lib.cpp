/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      20-09-2024
 * @link      https://www.codewars.com/kata/558fc85d8fd1938afb000014/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Returns the sum of the two lowest positive numbers
 * @param arr vector<int>
 * @return long
 */
long sumTwoSmallestNumbers(vector<int> arr) {
  sort(arr.begin(), arr.end());
  return arr[0] + arr[1];
}

/*
* Other solution
long sumTwoSmallestNumbers(std::vector<int> numbers) {
  long lowon = 0x7fffffff;
  long lowtwo = 0x7fffffff;
  for(int i : numbers) {
    if(i < lowone) {
      lowtwo=lowone;
      lowone=i;
    }
    else if(i<lowtwo)
      lowtwo=i;
  }

  return lowone+lowtwo;
}
*/