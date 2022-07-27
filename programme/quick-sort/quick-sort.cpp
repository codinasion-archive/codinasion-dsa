#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
       //Hoare's Partition
   int p = arr[low];
   int i = low-1, j = high+1;
   
   while(true)
   {
       do{
           i++;
       }while(arr[i] < p);
       
       do{
           j--;
       }while(arr[j] > p);
       if(i>=j){
           return j;
       }
       swap(arr[i],arr[j]);
   }
}

void quickSort(int arr[], int low, int high)
{
    Begin:
    if(low<high){
        int p = partition(arr,low,high);
        quickSort(arr,low,p);
        low = p+1;
        goto Begin;
    }
}

int main()
{
    int arr[5] = {5,4,1,6,2};
    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,low,high);
    for(int i = 0; i < high; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
