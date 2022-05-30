// Linear Search

#include <stdio.h>

int main()
{
    int n = 6;
    int input[] = {10, 20, 80, 30, 60, 50};
    int target = 30;

    for (int i = 0; i < n; i++)
    {
        if (input[i] == target)
        {
            printf("Found at index %d !!!\n", i);
            return 1;
        }
    }

    printf("Target Not Found !!!\n");

    return 0;
}
