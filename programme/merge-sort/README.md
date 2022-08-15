---
title: Merge Sort
description: The Merge Sort algorithm is a sorting algorithm that is considered an example of the divide and conquer strategy. So, in this algorithm, the array is initially divided into two equal halves and then they are combined in a sorted manner.
image: 
contributors:
  - KacperTKI
  - mobo07
  - curious0207
---

## Merge Sort

The **Merge Sort** algorithm is a sorting algorithm that is considered an example of the divide and conquer strategy. So, in this algorithm, the array is initially divided into two equal halves and then they are combined in a sorted manner. We can think of it as a recursive algorithm that continuously splits the array in half until it cannot be further divided. This means that if the array becomes empty or has only one element left, the dividing will stop, i.e. it is the base case to stop the recursion. If the array has multiple elements, we split the array into halves and recursively invoke the merge sort on each of the halves. Finally, when both the halves are sorted, the merge operation is applied. Merge operation is the process of taking two smaller sorted arrays and combining them to eventually make a larger one.

```txt
Input  : 5 4 1 6 2
Output : 1 2 4 5 6
```

```txt
Time Complexity : O(n logn)
```

```txt
Space Complexity : O(n)
```

---
