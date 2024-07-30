/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      28-07-2024
 * @link      https://www.hackerrank.com/challenges/c-tutorial-class/problem?isFullScreen=true
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
int main() {
  //! Testing part
  setup_io_test();

  int age, standard;
  string first_name, last_name;

  cin >> age >> first_name >> last_name >> standard;

  Student st;
  st.set_age(age);
  st.set_standard(standard);
  st.set_first_name(first_name);
  st.set_last_name(last_name);

  cout << st.get_age() << "\n";
  cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
  cout << st.get_standard() << "\n";
  cout << "\n";

  cout << st.get_age() << "," << st.get_first_name() << "," << st.get_last_name() << "," << st.get_standard();
  return 0;
}