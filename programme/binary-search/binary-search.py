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


print("Binary Search algorithmn to find the position of an element in a sorted array.")

while True:
    try:
        arr = list(map(int, input("\nInput: ").split(" ")))
    except ValueError:
        print("The array should only contain integers.")
        continue

    target = int(input("Target: "))
    result = binarySearch(arr, 0, len(arr)-1, target)
    if result:
        print("Output:", result)
    else:
        print(f"Target {target} not found in the given array.")