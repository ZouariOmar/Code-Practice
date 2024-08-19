/*****************************************************************************
 * @file      test.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      16-08-2024
 * @link      https://www.hackerearth.com/problem/algorithm/prime-query-bbe5751b/?source=list_view
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include <gtest/gtest.h>

#include "../src/lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}

TEST(Test01, PrincipalTest) {
  Solution sl;
  ostringstream out;
  sl.queries(out);
  EXPECT_EQ(out.str(), "2\n9\n");
}