/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      23-07-2024
 * @link      https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>
#include <vector>

// Use the stander workspace
using namespace std;

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

void setup_io_redirection();

class Solution {
 private:
  int var_len_arr;
  int queries;
  vector<vector<int>> arr;
  int to_print_i, to_print_j;

 public:
  Solution();
};

#endif