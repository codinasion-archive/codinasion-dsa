# Write a programme for binary search

def binarySearch(arr, target):
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            low = mid + 1
        else:
            high = mid - 1
    return -1


# get array from user
arr = input("Enter array  : ").split()
arr = [int(i) for i in arr]
target = int(input("Enter target : "))

if binarySearch(arr, target) == -1:
    print("\nOutput : Target not found")
else:
    print("\nOutput :", binarySearch(arr, target))
