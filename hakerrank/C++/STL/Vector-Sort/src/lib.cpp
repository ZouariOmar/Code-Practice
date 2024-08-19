/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      02-08-2024
 * @link      https://www.hackerrank.com/challenges/vector-sort/problem?isFullScreen=true
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Construct a new Solution::Solution object
 *
 */
Solution::Solution() {
  // Take the length of the array
  cin >> len;

  // Resizing the array
  arr.resize(len);

  // Take the integers of the array
  for (int i = 0; i < len; ++i)
    cin >> arr[i];
}

/**
 * @brief #### Sort the array (using the default C++ sort function)
 *
 */
inline void Solution::sort_array() {
  sort(arr.begin(), arr.end());
}

/**
 * @brief #### Print the array
 * 
 */
void Solution::print_array() {
  for (int it : arr)
    cout << it << " ";
}