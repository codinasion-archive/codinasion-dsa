#include <iostream>

void swap(int *array, int index1, int index2);
int partition(int *array, int lowIndex, int highIndex, int pivot);
void quickSort(int *array, int lowIndex, int highIndex);
void printArray(int *array, int size);

int main() {
	int pArray[] = { 5, 4, 1, 6, 2 };
	int size = sizeof(pArray)/sizeof(pArray[0]);
	printArray(pArray, size);

	quickSort(pArray, 0, size-1);
	printArray(pArray, size);

	return 0;
}

void printArray(int *array, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << '\n';
}

void quickSort(int *array, int lowIndex, int highIndex) {
	// base case for recursion
	if (lowIndex >= highIndex)
		return;
	
	// the pivot is set to the last element
	int pivot = array[highIndex];

	int pLeft = partition(array, lowIndex, highIndex, pivot);

	// once the pointers have met, we sort the subarrays to the left and right side of the pivot
	quickSort(array, lowIndex, pLeft - 1);
	quickSort(array, pLeft + 1, highIndex);
}

void swap(int *array, int index1, int index2) {
	int tmp = array[index1];
	array[index1] = array[index2];
	array[index2] = tmp;
}

int partition(int *array, int lowIndex, int highIndex, int pivot) {
	int pLeft = lowIndex;
	int pRight = highIndex - 1;
	
	while (pLeft < pRight) {
		// look for a left pointer, which is bigger than the pivot value
		// breaks when the right pointer is met as well
		while (array[pLeft] <= pivot && pLeft < pRight) {
			pLeft++;
		}
		// look for a right pointer, which is smaller than the pivot value
		// breaks when the left pointer is met as well
		while (array[pRight] >= pivot && pRight > pLeft) {
			pRight--;
		}

		// swap the elements, so that bigger elements are on the right side of the pivot and the smaller ones on the left
		swap(array, pLeft, pRight);
	}

	// this prevents the last element to potentially being out of order
	if (array[pLeft] > array[highIndex]) {
		// once the pointers meet, then we swap the element with the pivot
		swap(array, pLeft, highIndex);
	} else {
		pLeft = highIndex;
	}

	// at this point the pivot stands on the index where the left and right pointers met
	return pLeft;
}