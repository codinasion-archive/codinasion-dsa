// Merge Sort  Time complexity: O(n*logn) , Space complexity: O(n).
#include<stdio.h>
void mergearray(int arr[],int low,int mid,int high){
    int s1=mid-low+1;
    int s2=high-mid;
    int L[s1],R[s2];   
    for(int i=0;i<s1;i++){
        L[i]=arr[low+i];
    }
    for(int i=0;i<s2;i++){
        R[i]=arr[mid+1+i];
    }                              // L,R left and right sorted arrays
    int i=0,j=0,k=low;
    while(i<s1&&j<s2){
        if(L[i]<R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<s1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<s2){
        arr[k]=R[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int low,int high){
    if(high>low){
        int mid=low+(high-low)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        mergearray(arr,low,mid,high);
    }
}
int main(){
    int arr[]={5,4,1,6,2};
    int l=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    int h=n-1;
    printf("Input : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    mergesort(arr,l,h);
    printf("Output : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
