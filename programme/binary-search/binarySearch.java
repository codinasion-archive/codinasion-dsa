// Write a programme for a binary search
import java.util.Arrays;

public class binarySearch {

  public static void main(String[] args) {
    int array[] = { 10, 20, 30, 50, 60, 80 };
    int target = 30;

    System.out.println("Input  : " + Arrays.toString(array));
    System.out.println("Target : " + target);

    System.out.print("\nOutput : ");
    int result = binarySearchFunction(array, target);
    if (result == -1) {
      System.out.println("Target Not Found !!!");
    } else {
      System.out.println("Found at index " + result);
    }
  }

  public static int binarySearchFunction(int[] array, int target) {
    int start = 0;
    int end = array.length - 1;
    while (start <= end) {
      int mid = (start + end) / 2;
      int midValue = array[mid];
      if (midValue < target) {
        start = mid + 1;
      } else if (midValue > target) {
        end = mid - 1;
      } else {
        return mid;
      }
    }
    return -start - 1;
  }
}
