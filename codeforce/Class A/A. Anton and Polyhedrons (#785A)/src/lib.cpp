/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-09-30
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/785/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution()
    : res(0) {
  cin >> n;
}

/**
 * @brief ### Print the solution in the console
 */
void Solution::solve() {
  while (n--) {
    string faces;
    cin >> faces;

    if (faces == "Tetrahedron")
      res += 4;
    else if (faces == "Cube")
      res += 6;
    else if (faces == "Octahedron")
      res += 8;
    else if (faces == "Dodecahedron")
      res += 12;
    else if (faces == "Icosahedron")
      res += 20;
  }

  cout << res << endl;
}

/**
 * @brief ### Set the up io test function
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif
}