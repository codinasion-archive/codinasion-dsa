//Write a programme for Linear Search in Javascript

function linearSearch(arr, item) {
  // Go through all the elements of arr to look for item.
  for (var i = 0; i < arr.length; i++) {
    if (arr[i] === item) {
      // Found it!
      console.log("Target found at index:", i);
      return i;
    }
  }

  // Item not found in the array.
  console.log("Target not found");
  return null;
}

const arr = [10, 20, 80, 30, 60, 50];
let target = 30;

console.log("List   : ", arr);
console.log("Target : ", target, "\n");

linearSearch(arr, target);
