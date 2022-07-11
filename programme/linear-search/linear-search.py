# Write a programme for Linear Search

def linear_search(arr, target):

    for i in range(len(arr)):

        if arr[i] == target:
            print("Target found at index: ", i)
            return i
    print("Target not found")
    return None


arr = [10, 20, 80, 30, 60, 50]
target = 30

print("List   :", arr)
print("Target :", target)
print()

linear_search(arr, target)
