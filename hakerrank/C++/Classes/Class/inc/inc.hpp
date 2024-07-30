/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      28-07-2024
 * @link      https://www.hackerrank.com/challenges/c-tutorial-class/problem?isFullScreen=true
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

class Student {
 private:
  int age, standard;
  string f_name, l_name;

 public:
  //? Sets functions
  void set_age(int);
  void set_standard(int);
  void set_first_name(string);
  void set_last_name(string);

  //? Gets functions
  inline int get_age();
  inline string get_last_name();
  inline string get_first_name();
  inline int get_standard();
};

#endif