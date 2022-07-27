#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
   
    for(int i=0; i<n-1; i++)
    {
        bool swapped = false;
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        
        if(swapped == false){
            break;
        }
    }
}

int main()
{
    int arr[5] = {5,4,1,6,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
