// Kadane's Algorithm

import java.util.*;

public class Kadanes {

  public static void kadans(int numbers[]) {
    int cs = 0;
    int ms = Integer.MIN_VALUE;

    for (int i = 0; i < numbers.length; i++) {
      cs = cs + numbers[i];
      if (cs < numbers[i]) {
        cs = numbers[i];
      }

      ms = Math.max(cs, ms);
    }
    System.out.print("Max Subarray Sum Is : " + ms);
  }

  public static void main(String args[]) {
    int numbers[] = { -2, -3, -4, -1 };
    kadans(numbers);
  }
}
