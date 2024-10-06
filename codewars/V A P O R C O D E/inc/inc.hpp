/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      25-09-2024
 * @link      https://www.codewars.com/kata/5966eeb31b229e44eb00007a/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_HPP__
#define __INC_HPP__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>

// Use the stander workspace
using namespace std;

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

/*
The issue with your vaporcode function lies in how you're concatenating characters and spaces.
Specifically, when you do toupper(str[i]) + " ", the + operator between a character and a string literal (" ") results in incorrect behavior.
The character toupper(str[i]) is implicitly converted to an integer and added to the address of the string literal " ", leading to an unintended result.
*/

string vaporcode(const string &);

#endif