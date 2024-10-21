/**
 * @file main.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-21
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/1703/A codeForce @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main() {
  size_t t;
  cin >> t;

  while (t--) {
    string msg;
    cin >> msg;
    (tolower(msg[0]) == 'y' && tolower(msg[1]) == 'e' && tolower(msg[2]) == 's') ? cout << "YES" << endl : cout << "NO" <<endl;
  }

  return 0;
}