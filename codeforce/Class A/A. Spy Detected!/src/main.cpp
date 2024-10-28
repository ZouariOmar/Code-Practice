/**
 * @file main.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-28
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1512/A codeForce @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main() {
  //! Testing part
  setup_io_test();
  // Declare vars/objs
  short t;  // Test cases vars (1 ≤ t ≤ 100)
  cin >> t;
  while (t--) {
    Solution sl;
    sl.solve();
  }
  return 0;
}