/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      06-09-2024
 * @link      https://www.codewars.com/kata/66cdc6ab9e7a9f009e0ca8f6/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief
 *
 * @param x length
 * @param y speed
 * @param z lengthIncreases
 * @return true
 * @return false
 */
bool canSnailReachEnd(double x, double y, double z) {
  const double one_year_minutes = 525600;
  double snail_distance = 0.0;  // Snail's absolute distance travelled
  double band_length = x;       // Initial length of the rubber band

  for (int minute = 1; minute <= one_year_minutes; ++minute) {
    // Snail moves 'y' units every minute
    snail_distance += y;

    // Rubber band stretches by 'z' units every minute
    band_length += z;

    // Check if snail's cumulative distance reaches or exceeds the total band length
    if (snail_distance >= band_length)
      return true;  // Snail reached the end of the rubber band
  }

  // If after 1 year the snail hasn't reached the end, return false
  return false;
}

/*
* Other solution
bool canSnailReachEnd(double length, double speed, double lengthIncreases)
{
  return (speed - lengthIncreases) * 60 * 24 * 365 > length;
}
*/