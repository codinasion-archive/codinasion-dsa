# Write a programme for insertion sort

def insertion_sort(arr):

    for i in range(1, len(arr)):

        curr = arr[i]

        j = i-1

        while j >=0 and curr < arr[j] :
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = curr

    return arr
 
arr = [5, 4, 1, 6, 2]

print("Unsorted list, ", arr)
print("Sorted list,   ", insertion_sort(arr))