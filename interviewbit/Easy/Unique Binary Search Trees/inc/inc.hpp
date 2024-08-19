/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      04-08-2024
 * @link      https://www.interviewbit.com/coding-interview-questions/#
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

//? ------------------------------ STRUCT PROTOTYPE DECLARATION PART ------------------------------

// Define binary tree structure
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x)
      : val(x), left(nullptr), right(nullptr) {};
};

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

class Solution {
 private:
  vector<TreeNode *> generateTreesHelper(int, int);

 public:
  vector<TreeNode *> generateTrees(int);
};

#endif