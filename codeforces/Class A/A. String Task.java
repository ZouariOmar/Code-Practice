
/**
 * A. String Task.java
 *
 * codeforces problem
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 13/07/2025
 * @see https://codeforces.com/problemset/problem/118/A
 */

import java.util.Scanner;

// INFO: Make it `public class Solution {...}` in the submition
class Solution {
  private static void solve() {
    Scanner sc = new Scanner(System.in);
    String s = sc.nextLine(), vowels = "aoyeuiAOYEUI";
    StringBuilder ans = new StringBuilder();
    for (final char c : s.toCharArray()) {
      if (vowels.contains(c + ""))
        continue;
      ans.append("." + Character.toLowerCase(c));
    }
    System.out.println(ans.toString());
    sc.close();
  }

  public static void main(String[] args) {
    solve();
  }
} // Solution class
