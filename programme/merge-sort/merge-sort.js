//Function to merge the arrays split between left and right
const merge = (left, right) => {
  const sortedArr = [];
  //If the length of the left and right array is > 0 then the while loop continues
  while (left.length && right.length) {
    //Compare the first left and right values on each loop and push the smaller value in sortedArr
    if (left[0] < right[0]) {
      sortedArr.push(left.shift());
    } else {
      sortedArr.push(right.shift());
    }
  }
  //Spread the values for left and right in case of remnants
  return [...sortedArr, ...left, ...right];
};

const mergeSort = (arr) => {
  //Return the array if there is 1 or no element contained
  if (arr.length <= 1) return arr;

  //Getthe mid point of the array and divide the array in half
  const mid = Math.floor(arr.length / 2);
  const left = arr.splice(0, mid);
  const right = arr;

  //Call original function (mergeSort) recursively until 1 or no element is left in left and right array
  return merge(mergeSort(left), mergeSort(right));
};

const unsorted = [8, 32, 9, 1, 5, 10, 7];
const sorted = mergeSort(unsorted);

console.log(sorted);
