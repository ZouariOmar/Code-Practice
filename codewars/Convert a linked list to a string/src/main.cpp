/**
 * @file main.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-03
 * @copyright Copyright (c) 2024
 * @link https://www.codewars.com/kata/582c297e56373f0426000098/train/cpp codeWars @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int 
 */
int main() {
  Node *head = new Node(1, new Node(2, new Node(3, nullptr)));

  cout << stringify(head) << endl;

  return 0;
}