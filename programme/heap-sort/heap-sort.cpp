#include <iostream>
#include <cmath> // for floor()

void PrintArray(int *arr, int size);
void HeapSort(int *arr, int n);

int main() {
    int array[] = { 5, 4, 1, 6, 2 };
    int size = sizeof(array) / sizeof(array[0]);
    PrintArray(array, size);
    
    HeapSort(array, size);
    PrintArray(array, size);
    
    return 0;
}

void PrintArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';
}

void Swap(int *arr, int index1, int index2) {
    int tmp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = tmp;
}

void Heapify(int *arr, int n, int i) {
    int left = i * 2 + 1;
    int right = (i * 2) + 2;
    
    int max = i;
    
    // check if the left node exists and if so, then check if it's a bigger value
    if (left < n && arr[left] > arr[max]) {
        max = left; // if the left node has a bigger value, then update the max index
    }
    
    // check if the right node exists and if so, then check if it's a bigger value
    if (right < n && arr[right] > arr[max]) {
        max = right; // if the right node has a bigger value, then update the max index
    }
    
    if (max != i) {
        // if max is not the root, we swap places and make it one
        Swap(arr, i, max);
        Heapify(arr, n, max);
    }
}

void BuildMaxHeap(int *arr, int n) {
    // go through the remaining nodes of the tree and run heapify on each one
    for (int i = floor(n / 2) + 1; i >= 0; i--) {
        Heapify(arr, n, i);
    }
}

void HeapSort(int *arr, int n) {
    // build the binary heap
    BuildMaxHeap(arr, n);

    for (int i = n - 1; i >= 0; i--) {
        // move the current root to the end
        Swap(arr, 0, i);
        // heapify the binary heap without the end nodes, since they are in the right place
        Heapify(arr, i, 0);
    }
}