/*****************************************************************************
 * @file      test.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      04-08-2024
 * @link      https://edabit.com/challenge/zRe5fx3MbiBxcrvXH
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDING PART ------------------------------
#include <gtest/gtest.h>

// Include the main google test header file
#include "../src/lib.cpp"

//? --------------------------------- TESTING PART -----------------------------

/**
 * @brief ### Main testing function
 * *
 * - Using the google test (gtest)
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char **argv) {
  // Init the gtest
  testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}

/**
 * @brief #### Test 0
 * 
 */
TEST(NumberOfSyllablesTest, HandlesVariousWords) {
  EXPECT_EQ(numberSyllables("buf-fet"), 2);
  EXPECT_EQ(numberSyllables("beau-ti-ful"), 3);
  EXPECT_EQ(numberSyllables("mon-u-men-tal"), 4);
  EXPECT_EQ(numberSyllables("on-o-mat-o-poe-ia"), 6);
  EXPECT_EQ(numberSyllables("o-ver-ly"), 3);
  EXPECT_EQ(numberSyllables("pas-try"), 2);
  EXPECT_EQ(numberSyllables("flu-id"), 2);
  EXPECT_EQ(numberSyllables("syl-la-ble"), 3);
};