// write a programme for binary search
#include <iostream>

using namespace std;

int binary_search(int *tab, int size, int target);

int main()
{
    int input[] = {10, 20, 30, 50, 60, 80};
    int target = 30;

    cout << "Input  : ";
    for (int i = 0; i < 6; i++)
    {
        cout << input[i] << " ";
    }

    cout << "\nTarget : " << target << endl;
    
    int result = binary_search(input, sizeof(input) / sizeof(int), target);
    cout << "\nOutput : ";
    if (result == -1)
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found at index " << result << endl;
    }

    return 0;
}

int binary_search(int *arr, int size, int target)
{

    int left = 0,
        right = size - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            right = mid + 1;
        else
            left = mid + 1;
    }
    return -1;
}
