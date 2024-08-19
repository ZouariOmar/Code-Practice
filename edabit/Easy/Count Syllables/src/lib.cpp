/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      04-08-2024
 * @link      https://edabit.com/challenge/zRe5fx3MbiBxcrvXH
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Counts the number of syllables a word has. Each syllable is separated with a dash `-`
 *
 * @param word
 * @return int
 */
inline int numberSyllables(string word) {
  return count(word.begin(), word.end(), '-') + 1;
}