// Write a program for insertion sort in JavaScript
function insertionSort(arr){
    let n = arr.length;
    let i,j,key;
	for (i = 1; i < n; i++){
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
    return arr;
}


let arr = [14, 33, 27, 35 ,10];
console.log("Input: ", arr)
console.log("Output: ", insertionSort(arr));