# Write a programme for Selection Sort

arr = [0, 100, 55, 20, 13, 10]

def selection_sort(arr, ascending=True):
    for i in range(len(arr)):
        mid = i
        for j in range(i+1, len(arr)):
            if ascending:
                if arr[mid] > arr[j]:
                    mid = j
            else:
                if arr[mid] < arr[j]:
                    mid = j
        arr[i], arr[mid] = arr[mid], arr[i]
    return arr

print("Unsorted List : ", arr)
print("Sorted List   : ", selection_sort(arr, ascending=True))
