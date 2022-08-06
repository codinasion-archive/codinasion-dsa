#include<stdio.h>

int main(){
    int n=5;
    int arr[]={5,4,1,6,2};
    printf("Before Selection Sort:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<n-1;i++){
        int min_i=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_i]){
                min_i=j;
            }
        }     // min_i will have the index of min element in unsorted sub-array.
        int temp=arr[i];
        arr[i]=arr[min_i];
        arr[min_i]=temp;
    }
    printf("After Selection Sort:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}