/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-09-29
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/443/A CodeForces @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

Solution::Solution() {
  getline(cin, in);

  for (char c : in)
    if (isalpha(c)) st.insert(c);
}

void Solution::solve() {
  cout << st.size() << endl;
}