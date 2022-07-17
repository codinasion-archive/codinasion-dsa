#include <iostream>

int binary_search(int* tab, int size, int target);

int main(){

    int input[] = {10,20,30,50,60,80};
    int target = 30;

    std::cout << binary_search(input,6,target) << std::endl;

    return 0;
}

int binary_search(int* arr, int size, int target){

    int left  = 0,
        right = size - 1;

    while(left <= right){
        int mid = (left + right) / 2;
        if(arr[mid] == target)
            return mid; 
        else if(arr[mid] > target)
            right = mid + 1;
        else
            left = mid + 1;
    }
    return -1;
}