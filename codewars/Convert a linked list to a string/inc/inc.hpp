/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-03
 * @copyright Copyright (c) 2024
 * @link https://www.codewars.com/kata/582c297e56373f0426000098/train/cpp codeWars @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//* Use the stander space
using namespace std;

//? Structure prototype declaration part

struct Node {
  int data;
  Node *next;
  Node(int, Node *);
};  // Node structure

//? Function prototype declaration part

string stringify(Node *);

#endif