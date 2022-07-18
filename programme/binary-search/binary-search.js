// Write a programme for binary search
const binarySearch = (arr, target) => {
  let low = 0;
  let high = arr.length - 1;
  while (low <= high) {
    let mid = Math.floor((low + high) / 2);
    if (arr[mid] === target) {
      return mid;
    } else if (arr[mid] <= target) {
      low = mid + 1;
    } else if (arr[mid] >= target) {
      high = mid - 1;
    }
  }
  return -1;
};

const arr = [10, 20, 30, 40, 50];
const target = 30;

console.log("Input  : ", arr);
console.log("Target : ", target);
console.log("Output : ", binarySearch(arr, target));
