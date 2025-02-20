/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-27
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/course-schedule-iv leetcode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class Solution {
public:
  vector<bool> checkIfPrerequisite(int, vector<vector<int>> &, vector<vector<int>> &);
}; // Solution class

#endif // __INC_HPP__