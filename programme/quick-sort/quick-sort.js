function swap(arr, i, j){
    const temp = arr[i]
    arr[i] = arr[j]
    arr[j] = temp
}


function partition(arr, left, right) {
    const temp = arr[left]
    let swapIndex = left

    for (let i = left + 1; i <= right; i++) {
      if (temp > arr[i]) {
        swapIndex++
        if (i !== swapIndex) 
          swap(arr, swapIndex, i)
      }
    }

    if (swapIndex !== left) 
      swap(arr, swapIndex, left)

    return swapIndex
  }


  function quickSort(arr, left = 0, right = arr.length - 1) {
    if (left >= right) return
    
    let pivot = partition(arr, left, right)

    quickSort(arr, left, pivot - 1)
    quickSort(arr, pivot + 1, right)
    return arr
  }



let a = [5, 4, 1, 6, 2]

console.log("Before Quick Sort: " + a)
quickSort(a)
console.log("After Quick Sort:  " + a)
