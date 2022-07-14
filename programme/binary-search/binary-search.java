// Write a programme for a binary search

public int binarySearch(int[] array, int target){
    int start = 0;
    int end = array.length - 1;
    while(start <= end){
        int mid = (start + end)/2;
        int midValue = array[mid];
        if(midValue < target){
            start = mid + 1;
        } else if(midValue > target){
            end = mid - 1;
        } else {
            return mid;
        }
    }
    return -start - 1;
}