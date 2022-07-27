// Write a programme for Selection Sort

const arr = [0, 100, 55, 20, 13, 10];

function selectionSort(arr) { 
    for(let i = 0; i < arr.length; i++){
        let min = i;
        for(let j = i+1; j < arr.length; j++){
            if(ascending){
                if(arr[j] < arr[min]){
                    min=j; 
                }
            }
            else {
                if(arr[j] > arr[min]){
                    min=j; 
                } 
            }
        }
        if(min != i){
            let tmp = arr[i]; 
            arr[i] = arr[min];
            arr[min] = tmp;  
        }
    }
    return arr;
}

console.log("Unsorted List : ", arr)
console.log("Sorted List   : ", selectionSort(arr, ascending=true))
