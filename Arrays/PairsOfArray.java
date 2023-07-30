// Pairs Of Array

import java.util.*;

public class PairsOfArray {

  public static void Pairs(int numbers[]) {
    for (int i = 0; i < numbers.length - 1; i++) {
      int curr = numbers[i];
      for (int j = i + 1; j < numbers.length; j++) {
        System.out.print("(" + curr + "," + numbers[j] + ") ");
      }
      System.out.println();
    }
  }

  public static void main(String args[]) {
    int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    Pairs(numbers);
  }
}
