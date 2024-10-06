/***************************************************
 * @file      lib.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      27-09-2024
 * @link      https://www.codewars.com/kata/63b84f54693cb10065687ae5/train/c
 * @copyright Copyright (c) 2024
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.h"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief ### fill a two-dimensional list
 * @param m size_t
 * @param n size_t
 * @param matrix int[][]
 */
void create_box(size_t m, size_t n, int matrix[n][m]) {
  for (int layer = 0; layer < (n < m ? (n + 1) / 2 : (m + 1) / 2); layer++) {
    int value = layer + 1;  // The value to fill

    // Fill the top row of the current layer
    for (int j = layer; j < m - layer; j++)
      matrix[layer][j] = value;

    // Fill the bottom row of the current layer
    for (int j = layer; j < m - layer; j++)
      matrix[n - layer - 1][j] = value;

    // Fill the left column of the current layer
    for (int i = layer; i < n - layer; i++)
      matrix[i][layer] = value;

    // Fill the right column of the current layer
    for (int i = layer; i < n - layer; i++)
      matrix[i][m - layer - 1] = value;

  }
}

/*
* Other solution
#define MIN(a,b) (a<b?a:b)

void create_box (size_t m, size_t n, int matrix[n][m]) {
  for (size_t y=0;y<n;++y) {
     size_t miny = MIN(y+1,n-y);
     for (size_t x=0;x<m;++x){
       matrix[y][x] = MIN(miny, MIN(x+1, m-x));
     }
  }
}
*/
