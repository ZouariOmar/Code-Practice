/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      22-08-2024
 * @link      https://codeforces.com/problemset/problem/2002/B
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Set the up io test function
 */
void setup_io_test() {
#ifndef __TEST__
  freopen("../test/in.txt", "r", stdin);
#endif
}

/**
 * @brief ### Construct a new Solution::Solution object
 * *
 * - #### Hold data
 */
Solution::Solution() {
  cin >> len;

  bob.resize(len);
  alice.resize(len);

  for (int i{}; i < len; i++)
    cin >> bob[i];
  for (int i{}; i < len; i++)
    cin >> alice[i];
}

void Solution::winner() {
  int cnt1{}, cnt2{};

  for (int i{}; i < len; i++) {
    if (alice[i] == bob[i])
      cnt1++;
    if (alice[i] == bob[len - i - 1])
      cnt2++;
  }

  if (cnt1 == len || cnt2 == len)
    cout << "Bob" << endl;
  else
    cout << "Alice" << endl;
}

/*
* This is my only accepted solution
#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        bool fs(true), fr(true);
        for(long p = 0; p < n; p++){
            long b; scanf("%ld", &b);
            if(b != a[p]){fs = false;}
            if(b != a[n - 1 - p]){fr = false;}
        }

        puts(fs || fr ? "Bob" : "Alice");
    }

}
*/