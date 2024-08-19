/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      04-08-2024
 * @link      https://www.interviewbit.com/coding-interview-questions/#
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief
 *
 * @param A
 * @return vector<TreeNode*>
 */
vector<TreeNode*> Solution::generateTrees(int A) {
  if (A == 0) return {};
  return generateTreesHelper(1, A);
}

/**
 * @brief
 *
 * @param start
 * @param end
 * @return vector<TreeNode*>
 */
vector<TreeNode*> Solution::generateTreesHelper(int start, int end) {
  if (start > end) return {nullptr};

  vector<TreeNode*> allTrees;

  for (int i = start; i <= end; ++i) {
    // Generate all left and right subtrees
    vector<TreeNode*> leftTrees = generateTreesHelper(start, i - 1);
    vector<TreeNode*> rightTrees = generateTreesHelper(i + 1, end);

    // Connect left and right subtrees to root i
    for (TreeNode* left : leftTrees) {
      for (TreeNode* right : rightTrees) {
        TreeNode* currentTree = new TreeNode(i);
        currentTree->left = left;
        currentTree->right = right;
        allTrees.push_back(currentTree);
      }
    }
  }
  return allTrees;
}