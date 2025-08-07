import java.util.Scanner;

/**
 * A. 2-3 Moves.java
 *
 * 1716A codeforces probem
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 25/07/2025
 * @see https://codeforces.com/problemset/problem/1716/A
 */

// NOTE: In the submition, rename the class to `public class Solution`
class Solution {
  private static Scanner sc;

  private static void solve() {
    int n = sc.nextInt();
    if (n == 1)
      System.out.println(2);
    else
      System.out.println((n + 2) / 3);
  }

  public static void main(String[] args) {
    sc = new Scanner(System.in);
    int t = sc.nextInt(); // Number of test cases
    while (t-- != 0) {
      solve();
    }
    sc.close();
  }
} // Solution class
