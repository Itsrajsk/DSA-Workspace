// Linear Search

public class LinearSearch {

  public static int LinSear(int numbers[], int key) {
    for (int i = 0; i < numbers.length; i++) {
      if (key == numbers[i]) {
        return i;
      }
    }
    return -1;
  }

  public static void main(String args[]) {
    int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int key = 10;
    System.out.print("The Number Is At Index : " + LinSear(numbers, key));
  }
}
