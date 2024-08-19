/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      17-08-2024
 * @link      https://www.hackerrank.com/challenges/virtual-functions/problem?isFullScreen=true
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

void Professor::getdata() {
  int static id = 1;
  cin >> name >> age >> pubs;
  cur_id = id++;
}

void Professor::putdata() {
  cout << name << " " << age << " " << pubs << " " << cur_id << endl;
}

void Student::getdata() {
  int static id = 1;
  cin >> name >> age;
  for (int i = 0; i < 6; i++)
    cin >> marks[i];
  cur_id = id++;
}

void Student::putdata() {
  int sum{0};
  for (int i = 0; i < 6; i++)
    sum += marks[i];
  
  cout << name << " " << age << " " << sum << " " << cur_id << endl;
}