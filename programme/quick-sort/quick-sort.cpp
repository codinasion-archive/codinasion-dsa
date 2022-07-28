#include <iostream>

void swap(int *array, int index1, int index2);
int partition(int *array, int lp, int rp, int pivot);
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
	
	// The pivot is always the last element
	int pivot = array[highIndex];

	int lp = partition(array, lowIndex, highIndex, pivot);

	// once the pointers have met, we sort the subarrays to the left and right side of the pivot
	quickSort(array, lowIndex, lp - 1);
	quickSort(array, lp + 1, highIndex);
}

void swap(int *array, int index1, int index2) {
	int tmp = array[index1];
	array[index1] = array[index2];
	array[index2] = tmp;
}

int partition(int *array, int lowIndex, int highIndex, int pivot) {
	int lp = lowIndex;
	int rp = highIndex - 1;
	
	while (lp < rp) {
		// look for a left pointer, which is bigger than the pivot value
		// breaks when the right pointer is reached as well
		while (array[lp] <= pivot && lp < rp) {
			lp++;
		}
		// look for a right pointer, which is smaller than the pivot value
		// breaks when the left pointer is reached as well
		while (array[rp] >= pivot && rp > lp) {
			rp--;
		}

		// swap the elements, so that bigger elements are on the right side of the pivot and smaller one on the left
		swap(array, lp, rp);
	}

	// this prevents the last element potentially being out of order
	if (array[lp] > array[highIndex]) {
		// once the pointers meet, then we swap the element with the pivot
		swap(array, lp, highIndex);
	} else {
		lp = highIndex;
	}

	// at this point the pivot stands on the index where the left and right pointers met
	return lp;
}