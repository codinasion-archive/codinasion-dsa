#include <iostream>

void printArray(int *array, int size);
void insertionSort(int *array, int size);

int main() {
    int array[] = { 5, 4, 1, 6, 2 };
    int size = sizeof(array) / sizeof(array[0]);
    printArray(array, size);

    insertionSort(array, size);

    printArray(array, size);

    return 0;
}

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << '\n';
}

void insertionSort(int *array, int size) {
    // loop through the array
    for (int i = 1; i < size; i++) { // note that the first element can be skipped
        // store the current value
        int currVal = array[i];
        int j = i;
        // go backwards in the array, as long as the values behind are larger than the current value
        while (j > 0 && array[j-1] > currVal) {
            // while they are larger, move them to the right
            array[j] = array[j - 1];
            j--;
        }
        // when there are no larger elements, put the current value in the empty spot
        array[j] = currVal; 
    }
}