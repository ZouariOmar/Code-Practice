/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      dd-mm-yyyy
 * @link      NONE
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
  int T;
  cin >> T;
  while (T--) {
    long long A, B;
    cin >> A >> B;

    try {
      cout << Server::compute(A, B) << endl;
    } catch (std::bad_alloc& e) {
      cout << "Not enough memory" << endl;
    } catch (exception& e) {
      cout << "Exception: " << e.what() << endl;
    } catch (int e) {
      cout << "Other Exception" << endl;
    }
  }
  cout << Server::getLoad() << endl;
  return 0;
}