/***************************************************
 * @file      lib.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-08-2024
 * @link      https://codeforces.com/problemset/problem/41/A
 * @copyright Copyright (c) 2024
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.h"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

void Solution(const char *s, const char *t, size_t len) {
  int i = 0, j = len - 1;
  while (j != -1) {
    if (t[j] != s[i]) {
      printf("NO\n");
      return;
    }
    i++;
    j--;
  }

  printf("YES\n");
}