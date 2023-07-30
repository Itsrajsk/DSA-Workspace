// Printing Largest Element Of An Array

public class Largest {

  public static int Larg(int numbers[]) {
    int largest = Integer.MIN_VALUE;
    for (int i = 0; i < numbers.length; i++) {
      if (largest < numbers[i]) {
        largest = numbers[i];
      }
    }
    return largest;
  }

  public static void main(String args[]) {
    int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    System.out.print("Largest Element Is : " + Larg(numbers));
  }
}
