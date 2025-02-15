/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-24
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1399/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part
/**
 * @brief ### Print the solution in console
 */
void Solution::solve() {
  int t;
  cin >> t;  // Read number of test cases

  while (t--) {
    int n;
    cin >> n;  // Read length of the array
    set<int> st;

    for (int i{}; i < n; ++i) {
      int element;
      cin >> element;
      st.insert(element);  // Insert elements into the set
    }

    if (st.size() == 1) {  // If only one unique element, answer is always "YES"
      cout << "YES" << endl;
      continue;
    }

    bool possible{true};
    int prev = *st.begin();
    for (auto it = ++st.begin(); it != st.end(); ++it) {
      if (abs(*it - prev) > 1) {  // If difference greater than 1, not possible
        possible = false;
        break;
      }
      prev = *it;
    }

    cout << (possible ? "YES" : "NO") << endl;  // Output result
  }
}

/**
 * @brief Setup i/o test function
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif  // __TEST__
}