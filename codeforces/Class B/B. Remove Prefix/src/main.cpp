//! Lance the Doxygen file comment Her (in VSC - `/**↵`)

//? Include prototype declaration part
#include "lib.cpp"  // #include "lib.c"

//? Main int function prototype dev part

/**
 * @fn         main(int, const char **)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  std::cin.tie(nullptr)->sync_with_stdio(false);
  Solution sl;
  sl.solve();
  return EXIT_SUCCESS;
}