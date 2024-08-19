/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      19-08-2024
 * @link      https://www.hackerrank.com/challenges/abstract-classes-polymorphism/problem?isFullScreen=true
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>
#include <queue>

// Use the stander workspace
using namespace std;

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

//* Least Recently Used Cache
class LRUCache {
 private:
  int cp;
  

 public:
  // Constructors declaration part
  LRUCache(int);
  deque<pair<int, int>> dq;

  // Custom methods declaration part
  int get(int);
  void set(int, int);
};  // LRUCache end

#endif