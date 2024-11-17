/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-10
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/758/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution() {
  cin >> n;                                          // Take the number of citizens
  cin >> holder, m = holder, arr.push_back(holder);  // Init the max var in `arr[0]` and push it to `arr` vector
  for (size_t i{}; i < n - 1; i++)
    cin >> holder, arr.push_back(holder), m = max(m, holder);
}

/**
 * @brief ### Print the solution in console
 */
void Solution::solve() {
  int res{};  // Var to store the result
  for (int &it : arr)
    res += m - it;
  cout << res << endl;  // Display the result
}