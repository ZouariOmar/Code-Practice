/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      16-08-2024
 * @link      https://www.hackerearth.com/problem/algorithm/prime-query-bbe5751b/?source=list_view
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief Set up the Solution class test
 */
void Solution::setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif
}

/**
 * @brief #### Construct a new Solution::Solution object
 * *
 * - Take the user input
 * *
 * ! This solutions have issues
 */
Solution::Solution() {
  //! Testing part >> enable_test_mode
  setup_io_test();

  // Hold the number of test cases | the length of the array
  cin >> T >> len;

  // Resize the array
  arr.resize(len);

  // Hold the array
  for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++)
    cin >> *it;

  // Hold the L && R lines number
  cin >> LR_ln;
}

/**
 * @brief #### Find the number of pairs (i, j) such that L <= i < j <= R and Ai + Aj  can be expressed as the sum of one or more prime numbers.
 */
void Solution::queries() {
  for (int i = 0; i < LR_ln; i++) {
    int L, R;
    cin >> L >> R;  //? Hold the limits L && R
    int res{};

    for (int j = L - 1; j < R; j++) {
      for (int k = j; k < R; k++) {
        if (k == j) continue;
        int op = arr[j] + arr[k];
        if (op % 2 == 0 || (isPrime(op) && isPrime(op - 2)))
          res++;
      }
    }
    cout << res << endl;
  }
}

/**
 * @brief #### Check if the given int `x` in prime number
 *
 * @param x
 * @return true
 * @return false
 */
bool Solution::isPrime(int x) {
  if (x <= 0) return false;

  for (int i = 2; i <= x / 2; i++)
    if (!x % i)
      return false;

  return true;
}

/*
* Correct solution
#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> zero(n, 0);
    vector<int> one(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) {
            zero[i] = 1;
        } else if (a[i] == 1) {
            one[i] = 1;
        }

        if (i > 0) {
            zero[i] += zero[i - 1];
            one[i] += one[i - 1];
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--; r--;

        int x = zero[r];
        if (l > 0) {
            x -= zero[l - 1];
        }

        int y = one[r];
        if (l > 0) {
            y -= one[l - 1];
        }

        int len = r - l + 1;
        int c = (len * (len - 1)) / 2;
        c -= (x * (x - 1)) / 2;
        c -= x * y;

        cout << c << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
*/