# Write a programme for bubble sort

def bubble_sort(arr):

    length = len(arr)
    for i in range(length):
        is_sorted = True
        for j in range(length - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                is_sorted = False

        if is_sorted:
            return arr


arr = [14, 33, 27, 35, 10]
# convert integers to numbers, join them and print
print("Before Sort : " + ' '.join(str(num) for num in arr))
# convert integers to numbers, join them and print
print("After  Sort : " + ' '.join(str(num) for num in bubble_sort(arr)))
