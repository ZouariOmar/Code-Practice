class Solution {
  public static String camelCase(String input) {
    int len = input.length();
    StringBuilder res = new StringBuilder();

    for (int i = 0; i < len; i++) {
      char currentChar = input.charAt(i);
      if (currentChar >= 'A' && currentChar <= 'Z')
        if (i != 0)
          res.append(' ');
      res.append(currentChar);
    }

    return res.toString();
  }
}

/**
 * main
 */
public class main {
  public static void main(String[] args) {
    System.out.println(Solution.camelCase("camel Casing"));
  }
}

/*
 ? Other Solution
 * import java.util.Arrays;
 * 
 * class Solution {
 * public static String camelCase(String input) {
 * return input.replaceAll("([A-Z])", " $1");
 * }
 * }
 */