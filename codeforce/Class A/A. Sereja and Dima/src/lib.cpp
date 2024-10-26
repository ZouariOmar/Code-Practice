/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-26
 * @copyright Copyright (c) 2024
 * @link https://codeforces.com/problemset/problem/381/A codeForce @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 * *
 * - #### All numbers on the cards are distinct.
 */
Solution::Solution() {
  cin >> n;
  arr = new short[n];  // Allocate n place for the cards game
  for (short i{}; i < n; i++)
    cin >> arr[i];
}

/**
 * @brief ### Print The solution in the console
 */
void Solution::solve() {
  int p1{}, p2{};
  bool player_turn{};  // false ==> p1 | true ==> p2
  short i{}, j = n - 1;

  while (j >= i) {
    if (arr[i] > arr[j]) {  // Take the leftmost card
      (player_turn) ? p2 += arr[i] : p1 += arr[i];
      i++;
    } else {  // Take the rightmost card
      (player_turn) ? p2 += arr[j] : p1 += arr[j];
      j--;
    }
    player_turn = !player_turn;  // Next turn for the other player
  }

  cout << p1 << " " << p2 << endl;  // Print the result
}

/**
 * @brief ### Setup the i/o test function
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif  // __TEST__
}