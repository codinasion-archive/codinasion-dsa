#include <stdio.h>

int Min(int* arr, int start, int end);

// Selection sort Time complexity O(n^2), Space complexity O(1).
void SelectionSort(int* arr, int n);

int main()
{
    int arr[] = { 5 ,4 ,1 ,6 ,2 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array after sorting: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    SelectionSort(arr, n);

    printf("\nArray after sorting: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

int Min(int* arr, int start, int end) // Takes a particular range and finds the minimum within that range in the array
{
    // Set the minimum value to the maximum number
    int min = 0;
    int index = 0;
    for (int i = start; i < end; i++)
    {
        // Check every element if it is less then the previous min value update the min value!
        if (arr[i] < min || i == start)
        {
            min = arr[i];
            index = i;
        }
    }
    return index;
}

void SelectionSort(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        // Checks the minimum number in an array within i and array's last element
        // And replaces it with the i(th) element.
        int first = i;
        int min = Min(arr, first, n);
        int temp = arr[first];
        arr[first] = arr[min];
        arr[min] = temp;
    }
}

