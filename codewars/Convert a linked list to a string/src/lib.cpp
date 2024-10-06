/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-03
 * @copyright Copyright (c) 2024
 * @link https://www.codewars.com/kata/582c297e56373f0426000098/train/cpp codeWars @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Node::Node struct
 * @param x int
 * @param node Node *
 */
Node::Node(int x, Node *node)
    : data(x), next(node) {};

/**
 * @brief ### Returns a string representation of the list
 * @param head
 * @return string
 */
string stringify(Node *head) {
  const string To = " -> ";
  string res = "";

  while (head) {
    res += to_string(head->data) + To;
    head = head->next;
  }

  res += "nullptr";

  return res;
}