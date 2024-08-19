/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      02-08-2024
 * @link      https://www.hackerearth.com/problem/algorithm/make-palindrome-2-cf7b5be4/?source=list_view
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> len >> str;
}

/**
 * @brief ### Calculate the minimum amount of money to make the string a palindrome
 * @return int
 */
int Solution::to_palindrome() {
  // Cost initialized to 0 by default
  int cost = 0;

  // If the length of the `str` string is odd, one character can be in the middle
  unordered_map<char, int> char_count;
  for (char c : str)
    char_count[c]++;

  int odd_count = 0;

  // Calculate the cost based on the number of characters with odd occurrences
  for (auto& pair : char_count) {
    if (pair.second % 2 != 0)
      odd_count++;
  }

  // If more than one character has an odd count, additional swaps are needed
  if (odd_count > 1)
    cost = odd_count - 1;

  return cost;
}

/**
 * @brief ### Print the result (the cost)
 */
inline void Solution::printCost() {
  cout << to_palindrome() << endl;
}

/**
 * @brief ### Check if `x` is palindrome
 * @param x
 * @return true
 * @return false
 */
bool Solution::is_palindrome(string x) {
  size_t b{}, h(len - 1);

  while (b < h) {
    if (x[b] != x[h])
      return false;
    b++;
    h--;
  }

  return true;
}