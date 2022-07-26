// Write a programme for quick sort
#include <stdio.h>

// Utility function to swap array elements
void swap(int a[], int i, int j)
{
  int t = a[i];
  a[i] = a[j];
  a[j] = t;
}

int partition(int arr[], int start, int end)
{
  // initialise last element as pivot
  int x = arr[end];
  int i = start - 1, temp;

  for (int j = start; j <= end - 1; j++)
  {
    // if current element is smaller than pivot
    if (arr[j] < x)
    {
      // increment index of smaller element
      i++;
      swap(arr, i, j);
    }
  }
  swap(arr, i + 1, end);

  return i + 1;
}

void qs(int a[], int start, int end)
{
  if (start > end)
    return;

  int pivot = partition(a, start, end);

  // Sorts elements before the pivot and after the pivot separately
  qs(a, start, pivot - 1);
  qs(a, pivot + 1, end);
}

void quickSort(int input[], int size)
{

  qs(input, 0, size - 1);

  // Prints the sorted array
  for (int i = 0; i < size; i++)
    printf("%d ", input[i]);

  printf("\n");
}

int main()
{
  int a[] = {10, 80, 30, 90, 40, 50, 70};
  printf("Input  : ");
  for (int i = 0; i < 7; i++)
    printf("%d ", a[i]);
  printf("\n");

  int n = sizeof(a) / sizeof(a[0]);
  printf("Output : ");
  quickSort(a, n);

  return 0;
}
