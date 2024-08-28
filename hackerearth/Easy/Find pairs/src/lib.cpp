/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      25-08-2024
 * @link      https://www.hackerearth.com/problem/algorithm/find-pairs-9-98236f91/?source=list_view
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> len;
  arr.resize(len);
  for (size_t i{}; i < len; i++)
    cin >> arr[i];
}

/**
 * @brief
 * ! Work, but it have TLE issue
 */
void Solution::solve() {
  size_t i{};
  int res{};
  while (i < len) {
    int cmp = arr[i] - i;
    for (size_t j{}; j < len; j++)
      if (j != i && (cmp == arr[j] - j)) res++;
    i++;
  }

  cout << res << endl;
}

/*
The second loop goes through the diff_count map. For each difference with a count greater than 1,
it calculates how many pairs can be formed using the combination formula C(n,2)=n(n−1)2C(n,2)=2n(n−1)​.

std::unordered_map<int, int> diff_count;
int res = 0;

// Calculate and count differences
for (size_t i = 0; i < len; i++) {
    int diff = arr[i] - i;
    diff_count[diff]++;
}

// Calculate the number of valid pairs
for (const auto& entry : diff_count) {
    int count = entry.second;
    if (count > 1) {
        res += count * (count - 1);  // Choose 2 out of count
    }
}

std::cout << res << std::endl;
*/