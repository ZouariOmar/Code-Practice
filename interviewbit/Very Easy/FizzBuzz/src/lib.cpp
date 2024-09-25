/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      22-09-2024
 * @link      https://www.interviewbit.com/coding-interview-questions/#difficulties[]=very_easy
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Given a positive integer A, return an array of strings with all the integers from 1 to N.
 * But for multiples of 3 the array should have “Fizz” instead of the number.
 * For the multiples of 5, the array should have “Buzz” instead of the number.
 * For numbers which are multiple of 3 and 5 both, the array should have “FizzBuzz” instead of the number.
 * @param A
 * @return vector<string>
 */
vector<string> Solution::fizzBuzz(int A) {
  if (!A) return {};
  vector<string> res;

  for (int i{1}; i <= A; i++) {
    bool ts1{!(i % 3)}, ts2{!(i % 5)};
    if (ts1 && ts2)
      res.push_back("FizzBuzz");
    else if (ts1)
      res.push_back("Fizz");
    else if (ts2)
      res.push_back("Buzz");
    else
      res.push_back(to_string(i));
  }

  return res;
}