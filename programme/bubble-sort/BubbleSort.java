// Write a programme for bubble sort
import java.util.Arrays;

public class BubbleSort {

  public static void main(String[] args) {
    int[] arr = { 14, 33, 27, 35, 10 };
    System.out.println("Input  : " + Arrays.toString(arr));
    bubblesort(arr);
    System.out.println("Output : " + Arrays.toString(arr));
  }

  public static void bubblesort(int[] arr) {
    int sz = arr.length;
    boolean swapped = false;
    for (int i = 0; i < sz; i++) {
      for (int j = 1; j < sz - i; j++) {
        if (arr[j] < arr[j - 1]) {
          int temp = arr[j];
          arr[j] = arr[j - 1];
          arr[j - 1] = temp;
          swapped = true;
        }
      }
      if (!swapped) break;
    }
  }
}
