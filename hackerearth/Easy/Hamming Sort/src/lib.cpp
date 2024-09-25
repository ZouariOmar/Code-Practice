/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      22-09-2024
 * @link      https://www.hackerearth.com/problem/algorithm/hamming-sort-09045827/?source=list_view
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Arrange the elements in A based on their Hamming Distance from the integer K
 * @param N int
 * @param K int
 * @param A vector<int>
 * @return vector<int>
 */
vector<int> solve(int N, int K, vector<int> A) {
  sort(A.begin(), A.end(), [K](int a, int b) {
    int dist1{hamDis(a, K)}, dist2{hamDis(b, K)};
    if (dist1 == dist2) return a < b;
    return dist1 < dist2;
  });

  return A;
}

/**
 * @brief ### Calculate hamming distance
 * @param x int
 * @param y int
 * @return int
 */
int hamDis(int x, int y) {
  int ts{x ^ y}, setBits{};

  while (ts) {
    setBits += ts & 1;
    ts >>= 1;
  }

  return setBits;
}