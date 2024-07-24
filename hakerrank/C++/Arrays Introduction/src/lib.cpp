/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief #### Construct a new Solution:: Solution object
 *
 */
Solution::Solution() {
  // Take the length of the array
  cout << "length of the array...";
  cin >> len;

  // Resize the array
  arr.resize(len);

  // Define the array iterator
  vector<int>::iterator it = arr.begin();

  int i = 0;

  // Take the values of the each array element
  while (it != arr.end()) {
    cout << "array[" << i << "]...";
    cin >> *it;
    it++;
    i++;
  }
}

/**
 * @brief #### Print the array
 * 
 */
void Solution::printArray() {
  // Define the array iterator
  vector<int>::iterator it = arr.end() - 1;
  while (it != arr.begin() - 1) {
    cout << *it << " ";
    it--;
  }
}