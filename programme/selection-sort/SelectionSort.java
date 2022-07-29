// Write a programme for selection sort
public class SelectionSort {

  public static void main(String a[]) {
    int[] arr = { 5, 4, 1, 6, 2 };

    System.out.print("Before Selection Sort : ");
    for (int i : arr) {
      System.out.print(i + " ");
    }
    selectionSort(arr);

    System.out.print("\n" + "After  Selection Sort : ");
    for (int i : arr) {
      System.out.print(i + " ");
    }
    System.out.println();
  }

  public static void selectionSort(int[] arr) {
    for (int i = 0; i < arr.length - 1; i++) {
      int index = i;
      for (int j = i + 1; j < arr.length; j++) {
        if (arr[j] < arr[index]) {
          index = j;
        }
      }
      int smallerNumber = arr[index];
      arr[index] = arr[i];
      arr[i] = smallerNumber;
    }
  }
}
