/***************************************************
 * @file      main.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-08-2024
 * @link      https://codeforces.com/problemset/problem/41/A
 * @copyright Copyright (c) 2024
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.c"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------
int main() {
  //* principal vars declaration part
  char s[PATH_MAX], t[PATH_MAX];
  scanf("%s%s", &s, &t);

  if (strlen(s) != strlen(t))
    printf("NO\n");
  else
    Solution(s, t, strlen(s));

  return 0;
}
