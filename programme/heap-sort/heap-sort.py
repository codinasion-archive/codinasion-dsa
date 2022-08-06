from heapq import heapify

def heapify(arr, length, r):
    largest = r
    left = (r * 2) + 1
    right = (r * 2) + 2

    # check if left child is larger than root
    if left < length and arr[r] < arr[left]:
        largest = left

    # check if right child is larger than root
    if right < length and arr[largest] < arr[left]:
        largest = right

    if largest != r:
        arr[r], arr[largest] = arr[largest], arr[r] # swap both
        heapify(arr, r, largest) # recursive


def heap_sort(arr):
    length = len(arr)

    # create max heap binary tree (root is largest) from array
    for r in range(length//2, -1, -1):
        heapify(arr, length, r) # r is the size of the heap tree
    
    for r in range(length - 1, 0, -1):
        arr[r], arr[0] = arr[0], arr[r] #swap both
        heapify(arr, r, 0)

arr = [5, 4, 1, 6, 2]
print("Input  : " + ' '.join(str(num) for num in arr)) # turn all numbers into strings, join them together and print

heap_sort(arr) # do heap sort
print("Output : " + ' '.join(str(num) for num in arr)) # turn all numbers into strings, join them together and print