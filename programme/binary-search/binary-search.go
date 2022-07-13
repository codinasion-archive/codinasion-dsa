package main

import (
	"fmt"
)

func main() {
	var arr []int
	fmt.Println("Enter the size of array: ")
	var size int
	fmt.Scan(&size)
	fmt.Println("Enter the elements of array: ")
	for i := 0; i < size; i++ {
		var elem int
		fmt.Scan(&elem)
		arr = append(arr, elem)
	}
	var n int
	fmt.Println("Enter a number: ")
	fmt.Scan(&n)
	fmt.Println("Enter a number: ", n, "is found at index", binarySearch(arr, n))
}

func binarySearch(arr []int, n int) int {
	var low int = 0
	var high int = len(arr) - 1
	var mid int
	for low <= high {
		mid = (low + high) / 2
		if arr[mid] == n {
			return mid
		} else if arr[mid] < n {
			low = mid + 1
		} else {
			high = mid - 1
		}
	}
	return -1
}
