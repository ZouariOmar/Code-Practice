/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      30-07-2024
 * @link      https://www.hackerrank.com/challenges/box-it/problem?isFullScreen=true
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

//? -- Constructor functions section --
/**
 * @brief #### Construct a new Box::Box object
 * *
 * - Initialise the l, b and h vars on 0
 */
Box::Box()
    : l{}, b{}, h{} {};

/**
 * @brief #### Construct a new Box:: Box object
 * *
 * - Initialise the l, b and h vars on x, y and z
 * @param x
 * @param y
 * @param z
 */
Box::Box(int x, int y, int z)
    : l(x), b(y), h(z) {};

/**
 * @brief #### Construct a new Box::Box object
 * *
 * - Copy constructor
 * @param b
 */
Box::Box(Box &b)
    : b(b.b), l(b.l), h(b.h) {};

//? -- Get functions section --
/**
 * @brief #### Return the length of the box
 *
 * @return int
 */
int Box::getLength() {
  return l;
}

/**
 * @brief #### Return the breadth of the box
 *
 * @return int
 */
int Box::getBreadth() {
  return b;
}

/**
 * @brief #### Return the height of the box
 *
 * @return int
 */
int Box::getHeight() {
  return h;
}

/**
 * @brief #### Calculate the volume of the box
 *
 * @return long long
 */
long long Box::CalculateVolume() {
  return (long long)l * b * h;
}

//? -- Operator overloading functions section --

/**
 * @brief #### < overloading function
 * @param B
 * @return true
 * @return false
 */
bool Box::operator<(const Box &B) {
  return ((l < B.l) || ((b < B.b) && (l == B.l)) || ((h < B.h) && (b == B.b) && (l == B.l)));
}

/**
 * @brief #### Print the l, b and h vars in one line
 * @param out
 * @param B
 * @return ostream&
 */
ostream &operator<<(ostream &out, Box &B) {
  out << B.l << " " << B.b << " " << B.h;
  return out;
}