def binarySearch(arr, left, right, x):
    if right >= left:
        mid = left + (right - left) // 2
  
        if arr[mid] == x:
            return mid
  
        elif arr[mid] > x:
            return binarySearch(arr, left, mid-1, x)
  
        else:
            return binarySearch(arr, mid + 1, right, x)

    return None
  
  
arr = list(map(int, input("Input: ").split(" ")))
target = int(input("Target: "))
  
print("Output:", binarySearch(arr, 0, len(arr)-1, target))