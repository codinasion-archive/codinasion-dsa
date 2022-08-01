// Write a programme for selection sort in cpp.
#include<bits/stdc++.h>
using namespace std;

int main(){
    // Selection sort Time complexity- O(n^2) , Space complexity- O(1).
    int arr[]={5,4,1,6,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Selection Sort:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){  // comparing 
                min_index=j;
            }
        }
        int temp=arr[i];        // swapping minimum element from unsorted array with ith element.
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }
    cout<<"After Selection Sort:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}