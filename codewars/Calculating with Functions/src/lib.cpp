/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      16-08-2024
 * @link      https://www.codewars.com/kata/525f3eda17c7cd9f9e000b39/train/cpp
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

int calculate(vector<int> op) {
  switch (op[1]) {
    // Plus
    case 0:
      return op[0] + op[2];
      break;

    // Minus
    case 1:
      return op[0] - op[2];
      break;

    // Times
    case 2:
      return op[0] * op[2];
      break;

    // Divided_by
    case 3:
      return op[0] / op[2];
      break;

    default:
      break;
  }
}

vector<int> init_op(int x) {
  vector<int> op(3);
  op[2] = x;
  return op;
}

auto zero() {
  return init_op(0);
}
auto one() {
  return init_op(1);
}
auto two() {
  return init_op(2);
}
auto three() {
  return init_op(3);
}
auto four() {
  return init_op(4);
}
auto five() {
  return init_op(5);
}
auto six() {
  return init_op(6);
}
auto seven() {
  return init_op(7);
}
auto eight() {
  return init_op(8);
}
auto nine() {
  return init_op(9);
}

auto zero(vector<int> op) {
  op[0] = 0;
  return calculate(op);
}
auto one(vector<int> op) {
  op[0] = 1;
  return calculate(op);
}

auto two(vector<int> op) {
  op[0] = 2;
  return calculate(op);
}

auto three(vector<int> op) {
  op[0] = 3;
  return calculate(op);
}

auto four(vector<int> op) {
  op[0] = 4;
  return calculate(op);
}

auto five(vector<int> op) {
  op[0] = 5;
  return calculate(op);
}

auto six(vector<int> op) {
  op[0] = 6;
  return calculate(op);
}

auto seven(vector<int> op) {
  op[0] = 7;
  return calculate(op);
}

auto eight(vector<int> op) {
  op[0] = 8;
  return calculate(op);
}

auto nine(vector<int> op) {
  op[0] = 9;
  return calculate(op);
}

auto plus(vector<int> op) {
  op[1] = 0;
  return op;
}

auto minus(vector<int> op) {
  op[1] = 1;
  return op;
}

auto times(vector<int> op) {
  op[1] = 2;
  return op;
}

auto divided_by(vector<int> op) {
  op[1] = 3;
  return op;
}

/*
* Or this solution
* *****************
#include <functional>
using op = std::function<int(int)>;
int id(int n) { return n; }

int zero (op func = id) { return func(0); }
int one  (op func = id) { return func(1); }
int two  (op func = id) { return func(2); }
int three(op func = id) { return func(3); }
int four (op func = id) { return func(4); }
int five (op func = id) { return func(5); }
int six  (op func = id) { return func(6); }
int seven(op func = id) { return func(7); }
int eight(op func = id) { return func(8); }
int nine (op func = id) { return func(9); }

op plus      (int n) { return [=](int m) { return m + n; }; }
op minus     (int n) { return [=](int m) { return m - n; }; }
op times     (int n) { return [=](int m) { return m * n; }; }
op divided_by(int n) { return [=](int m) { return m / n; }; }
*/