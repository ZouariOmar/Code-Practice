/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      19-08-2024
 * @link      https://codeforces.com/problemset/problem/59/A
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Construct a new Solution::Solution object
 * *
 * - Take the usr input
 */
Solution::Solution() {
  cin >> str;
}

/**
 * @brief #### Print the corrected word s. If the given word s has strictly more uppercase letters,
 * make the word written in the uppercase register, otherwise - in the lowercase one.
 */
void Solution::to_case() {
  if (count_if(str.begin(), str.end(), [](char a) -> bool {
        return isupper(a);
      }) > (str.size() / 2))
    transform(str.begin(), str.end(), str.begin(), ::toupper);
  else
    transform(str.begin(), str.end(), str.begin(), ::tolower);

  cout << str << endl;
}