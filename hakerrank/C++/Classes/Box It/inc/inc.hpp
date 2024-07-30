/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      30-07-2024
 * @link      https://www.hackerrank.com/challenges/box-it/problem?isFullScreen=true
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>

// Use the stander workspace
using namespace std;

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

class Box {
 private:
  int l, b, h;

 public:
  //* Constructors
  Box();
  Box(int, int, int);
  Box(Box &);

  //* Functions
  int getLength();
  int getBreadth();
  int getHeight();

  long long CalculateVolume();

  bool operator<(const Box &);
  friend ostream &operator<<(ostream &, Box &);
};

#endif