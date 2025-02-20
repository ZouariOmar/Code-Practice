/***************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 ***************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------
//* include std libs
#include <iostream>
#include <unordered_set>

//* use the stander workspace
using namespace std;

//? ----------------------------- FUNCTIONS PROTOTYPE DECLARATION PART -----------------------------

class Solution {
 public:
  //? Node structure
  struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int val)
        : data(val), left(nullptr), right(nullptr) {};
  };

  Node *RemoveHalfNodes(Node *);
  void printBT(Node *);
};

#endif