/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&sortBy=submissions
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief
 *
 * @param arr
 * @return vector<int>
 */
vector<int> Solution::duplicates(vector<long long> arr) {
  vector<int> ans;

  int i = 0;
  while (i < arr.size()) {
    for (int j = 0; j < arr.size(); j++) {
      if (arr[i] == arr[j] && i != j) {
        ans.push_back(arr[i]);
        arr.erase(arr.begin() + j);
      }
    }
    i++;
  }

  if (ans.empty())
    return {-1};
  else {
    sort(ans.begin(), ans.end());
    return ans;
  }
}