// Write a programme for binary search
#include <stdio.h>

int binarySearch(int array[], int x, int low, int high)
{
  // Repeat until the pointers low and high meet each other
  while (low <= high)
  {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void)
{
  int array[] = {10, 20, 30, 50, 60, 80};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 30;
  printf("Array  : ");
  for (int i = 0; i < n; i++)
    printf("%d ", array[i]);
  printf("\nTarget : %d\n", x);
  int result = binarySearch(array, x, 0, n - 1);
  printf("Output : ");
  if (result == -1)
    printf("Not found");
  else
    printf("%d", result);
  printf("\n");
  return 0;
}
