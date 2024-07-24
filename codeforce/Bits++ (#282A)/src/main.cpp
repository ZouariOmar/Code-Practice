/***************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://codeforces.com/problemset/problem/282/A
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------
int main(int argc, char const *argv[]) {
  //* principal vars declaration part

#ifndef __TEST__
  freopen("../doc/input.txt", "r", stdin);
  freopen("../out/output.txt", "w", stdout);
#endif

  // Take the number of statements
  int n;
  cin >> n;

  // define the result X (take 0 by default)
  int x{};

  for (int i = 0; i < n; i++) {
    string holder;
    cin >> holder;
    if (holder[1] == '-')
      x--;
    else
      x++;
  }

  // Print the result in output.txt
  cout << x;

  return 0;
}
