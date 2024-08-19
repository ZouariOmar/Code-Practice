/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      19-08-2024
 * @link      https://www.hackerrank.com/challenges/abstract-classes-polymorphism/problem?isFullScreen=true
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Construct a new LRUCache::LRUCache object
 * *
 * - Take the capacity of the cache
 * @param x
 */
LRUCache::LRUCache(int x)
    : cp(x) {};

int LRUCache::get(int key) {
  deque<pair<int, int>>::iterator it = dq.begin();
  while (it != dq.end()) {
    if (it->first == key) return it->second;
    it++;
  }

  return -1;
}

void LRUCache::set(int key, int value) {
  dq.push_front({key, value});
  if (dq.size() > cp) dq.pop_back();
}