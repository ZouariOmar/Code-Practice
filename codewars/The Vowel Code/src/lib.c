/**
 * @file lib.c
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-24
 * @copyright Copyright (c) 2024
 * @link https://www.codewars.com/kata/53697be005f803751e0015aa/train/c codeWars @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.h"

//? Function/Class prototype dev part

/**
 * ? Pattern:
 * a -> 1
 * e -> 2
 * i -> 3
 * o -> 4
 * u -> 5
 */

/**
 * @brief ### Replace all the lowercase vowels in a given string with numbers according to the pattern.
 * @param str const char
 * @return char*
 */
char *encode(const char *str) {
  char *encoded_str = (char *)malloc(strlen(str) + 1);  // Allocate memory for the new encoded string (same length as input + 1 for null terminator)
  if (!encoded_str)
    return NULL;  // Return NULL if memory allocation fails

  // Iterate through the input string and encode vowels
  for (int i = 0; str[i] != '\0'; i++) {
    switch (str[i]) {
      case 'a':
        encoded_str[i] = '1';
        break;
      case 'e':
        encoded_str[i] = '2';
        break;
      case 'i':
        encoded_str[i] = '3';
        break;
      case 'o':
        encoded_str[i] = '4';
        break;
      case 'u':
        encoded_str[i] = '5';
        break;
      default:
        encoded_str[i] = str[i];  // Copy non-vowel characters as-is
    }
  }
  encoded_str[strlen(str)] = '\0';  // Null-terminate the encoded string

  return encoded_str;  // Return the encoded string
}

/**
 * @brief ### Turn the numbers back into vowels according to the same pattern shown above.
 * @param str const char *
 * @return char *
 */
char *decode(const char *str) {
  char *decoded_str = (char *)malloc(strlen(str) + 1);  // Allocate memory for the new decoded string (same length as input + 1 for null terminator)
  if (decoded_str == NULL)
    return NULL;  // Return NULL if memory allocation fails

  // Iterate through the input string and decode numbers to vowels
  for (int i = 0; str[i] != '\0'; i++) {
    switch (str[i]) {
      case '1':
        decoded_str[i] = 'a';
        break;
      case '2':
        decoded_str[i] = 'e';
        break;
      case '3':
        decoded_str[i] = 'i';
        break;
      case '4':
        decoded_str[i] = 'o';
        break;
      case '5':
        decoded_str[i] = 'u';
        break;
      default:
        decoded_str[i] = str[i];  // Copy non-number characters as-is
    }
  }
  decoded_str[strlen(str)] = '\0';  // Null-terminate the decoded string

  return decoded_str;  // Return the decoded string
}

/*
* Other solution
#define _GNU_SOURCE

#include <stdlib.h>
#include <string.h>

char *encode(const char *string)
{
  char *ret = strdup(string);
  for (char *p = ret; *p; p++)
  {
    switch (*p)
    {
      case 'a': *p = '1'; break;
      case 'e': *p = '2'; break;
      case 'i': *p = '3'; break;
      case 'o': *p = '4'; break;
      case 'u': *p = '5'; break;
    }
  }
  return ret;
}

char *decode(const char *string)
{
  char *ret = strdup(string);
  for (char *p = ret; *p; p++)
  {
    switch (*p)
    {
      case '1': *p = 'a'; break;
      case '2': *p = 'e'; break;
      case '3': *p = 'i'; break;
      case '4': *p = 'o'; break;
      case '5': *p = 'u'; break;
    }
  }
  return ret;
}
*/