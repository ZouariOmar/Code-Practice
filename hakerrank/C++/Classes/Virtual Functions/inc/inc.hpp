/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      17-08-2024
 * @link      https://www.hackerrank.com/challenges/virtual-functions/problem?isFullScreen=true
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

class Person {
 public:
  string name;
  int age;
  virtual void getdata() {};
  virtual void putdata() {};
};

class Professor : public Person {
 private:
  int pubs;
  int cur_id;

 public:
  void getdata();
  void putdata();
};

class Student : public Person {
 private:
  int marks[6], cur_id;

 public:
  void getdata();
  void putdata();
};

#endif