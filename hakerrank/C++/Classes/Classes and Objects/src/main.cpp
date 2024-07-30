/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      29-07-2024
 * @link      https://www.hackerrank.com/challenges/classes-objects/problem?isFullScreen=true
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------

/**
 * @brief # The Main Program Function
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char const *argv[]) {
  //! Testin part
  setup_io_test();

  int n;  // number of students
  cin >> n;
  Student *s = new Student[n];  // an array of n students

  for (int i = 0; i < n; i++) {
    s[i].input();
  }

  // calculate kristen's score
  int kristen_score = s[0].calculateTotalScore();

  // determine how many students scored higher than kristen
  int count = 0;
  for (int i = 1; i < n; i++) {
    int total = s[i].calculateTotalScore();
    if (total > kristen_score) {
      count++;
    }
  }

  // print result
  cout << count;

  return 0;
}