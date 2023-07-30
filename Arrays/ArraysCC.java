// Printing Sum Of Subarray Using Brute Force Approach

public class ArraysCC {

  public static void printsubarray(int array[]) {
    int total = 0;
    int max = array[0];
    int min = array[0];

    for (int i = 0; i < array.length; i++) {
      for (int j = i; j < array.length; j++) {
        int sum = 0;
        for (int k = i; k <= j; k++) {
          System.out.print(array[k] + " ");
          sum += array[k];
        }
        System.out.println("(sum = " + sum + ")");

        if (sum > max) {
          max = sum;
        }
        if (sum < min) {
          min = sum;
        }
        total++;
      }
      System.out.println();
    }
    System.out.println("The total Subarray : " + total);
    System.out.println("The Max sum of element is : " + max);
    System.out.println("The Min sum of element is : " + min);
  }

  public static void main(String[] args) {
    int arr[] = { 2, 4, 6, 8, 10 };
    printsubarray(arr);
  }
}
