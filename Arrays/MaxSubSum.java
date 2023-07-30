// Max Sum Of An SubArray

import java.util.*;

public class MaxSubSum {

  public static void Subarray(int numbers[]) {
    int currsum = 0;
    int maxsum = Integer.MIN_VALUE;

    for (int i = 0; i < numbers.length; i++) {
      int start = i;
      for (int j = i; j < numbers.length; j++) {
        int end = j;
        currsum = 0;
        for (int k = start; k <= end; k++) {
          System.out.print(numbers[k] + " ");
          currsum += numbers[k];
        }
        System.out.println(" = " + currsum);
        if (maxsum < currsum) {
          maxsum = currsum;
        }
      }
      System.out.println();
    }
    System.out.println("Max Sum = " + maxsum);
  }

  public static void main(String args[]) {
    int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    Subarray(numbers);
  }
}
