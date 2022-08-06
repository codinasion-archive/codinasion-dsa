# Write a programme for quick sort

def get_middle_value(value0, value1, value2):
    """Returns the value that is in between the other values"""

    if value1 >= value0 >= value2 or value2 >= value0 >= value1:
        return value0
    if value0 >= value1 >= value2 or value2 >= value1 >= value0:
        return value1
    return value2


def swap_items(array, index1, index2):
    """Swaps the value of index1 with the value of index2"""

    array[index1], array[index2] = (
        array[index2],
        array[index1],
    )
    return array


def quick_sort(array):
    """Sorts an array by increasing values using quick sort."""

    # base cases
    if len(array) == 0 or len(array) == 1:
        return array

    if len(array) == 2:
        return array if array[0] < array[1] else array[::-1]

    # determine the pivot by taking the middle value of the first, center and last values in the array
    pivot = get_middle_value(array[0], array[len(array) // 2], array[-1])
    # temporarily remove the pivot
    array.remove(pivot)

    # set some values to enter the loop
    index_item_from_left = 0
    index_item_from_right = 1
    first = True
    while index_item_from_left < index_item_from_right:
        # it should not swap when entering the loop
        if not first:
            # swap the items
            array = swap_items(array, index_item_from_left,
                               index_item_from_right)
        else:
            first = False

        # get item from left
        # default value to move the pivot farthest to the right
        index_item_from_left = len(array)
        for i, item in enumerate(array):
            if item > pivot:
                index_item_from_left = i
                break

        # get item from right
        # default value to move the pivot farthest to the left
        index_item_from_right = 0
        for i, item in enumerate(array[::-1]):
            if item < pivot:
                # the index has to be reversed because the array is reversed in this loop
                index_item_from_right = len(array) - 1 - i
                break

    # now add the pivot back in
    array.append(pivot)
    # swap the pivot to the correct place
    array = swap_items(array, index_item_from_left, len(array) - 1)
    return quick_sort(array[:index_item_from_left]) + quick_sort(
        array[index_item_from_left:]
    )


if __name__ == "__main__":
    # example test:
    import random

    array = []
    for i in range(20):
        array.append(random.randint(0, 50))
    print(f"Before sort : {array}")
    array = quick_sort(array)
    print(f"After  sort : {array}")

    last_value = array[0]
    for i in range(1, len(array)):
        if array[i] < array[i - 1]:
            raise ValueError("Wrong result")
