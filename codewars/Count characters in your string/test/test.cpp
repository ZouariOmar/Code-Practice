/**
 * @file test.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief Testing part
 * @version 0.1
 * @date 2024-09-29
 * @copyright Copyright (c) 2024
 */

#include <gtest/gtest.h>

#include "../src/lib.cpp"

/**
 * @brief # The main test function
 * @param argc int
 * @param argv char **
 * @return int
 */
int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

/**
 * @brief ### Function to count character frequency
 * @param str string &
 * @return std::unordered_map<char, int>
 */
std::unordered_map<char, int> Count(const std::string &str) {
  std::unordered_map<char, int> freq;
  for (char ch : str)
    ++freq[ch];
  return freq;
}

/**
 * @brief Helper function to compare two unordered_maps
 * @param lhs unordered_map<char, int> &
 * @param rhs unordered_map<char, int> &
 * @return true false
 */
bool compareMaps(const std::unordered_map<char, int>& lhs, const std::unordered_map<char, int>& rhs) {
  if (lhs.size() != rhs.size()) return false;
  for (const auto& pair : lhs)
    if (rhs.find(pair.first) == rhs.end() || rhs.at(pair.first) != pair.second)
      return false;
  return true;
}

/**
 * @brief Test case for the character frequency function
 */
TEST(CharFrequencyTest, BasicTest) {
  std::unordered_map<char, int> expected = {{'a', 2}, {'b', 1}};
  std::unordered_map<char, int> result = Count("aba");
  EXPECT_TRUE(compareMaps(result, expected));

  std::unordered_map<char, int> expected1 = {};
  std::unordered_map<char, int> result1 = Count("");
  EXPECT_TRUE(compareMaps(result1, expected1));
}