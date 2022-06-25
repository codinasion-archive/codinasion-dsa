// Write a GO programme for Linear Search.
package main

import "fmt"

func main () {
	var n, i, value, target int
	fmt.Printf("Enter number of elements in the array: ")
	fmt.Scan(&n)
	var array []int
	fmt.Printf("Enter %d elements : \n", n)
	for i = 0 ; i < n ; i++ {
		fmt.Scan(&value)
		array = append(array, value)
	}

	fmt.Printf("Enter the value to search in the array: ")
	fmt.Scan(&target)

	value = -1
	for i = 0 ; i < n ; i++ {
		if target == array[i]{
			value = i
			break
		}
	}

	if value == -1 {
		fmt.Printf("%d does not exists in the given array.\n", target)
	} else {
		fmt.Printf("%d is located at index position %d .\n", target, value)
	}
}