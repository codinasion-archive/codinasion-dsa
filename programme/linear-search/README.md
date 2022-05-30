---
title: Linear Search
description: Linear search is the simplest searching algorithm. In Linear search, we simply traverse the list completely and match each element of the list with the target item, whose location is to be found. If the match is found, then the location of the item is returned. Otherwise, the algorithm returns NULL.
tags:
  - c
contributors:
  - harshraj8843
---

## Linear Search

Linear search is the simplest searching algorithm. In Linear search, we simply traverse the list completely and match each element of the list with the target item, whose location is to be found. If the match is found, then the location of the item is returned. Otherwise, the algorithm returns NULL.

```txt
Input  : 10 20 80 30 60 50
Target : 30

Output : 3
```

Steps :-

```txt
Location 0 : 10 20 80 30 60 50
             30                 ( No Match )
Location 1 : 10 20 80 30 60 50
                30              ( No Match )
Location 2 : 10 20 80 30 60 50
                   30           ( No Match )
Location 3 : 10 20 80 30 60 50
                      30        ( Match !!! )
```

```txt
Time Complexity : O(n)
```

```txt
Space Complexity : O(1)
```

---

<CodeBlock>

```c
#include <stdio.h>

int main()
{
    int n = 6;
    int input[] = {10, 20, 80, 30, 60, 50};
    int target = 30;

    for (int i = 0; i < n; i++)
    {
        if (input[i] == target)
        {
            printf("Found at index %d !!!\n", i);
            return 1;
        }
    }

    printf("Target Not Found !!!\n");

    return 0;
}
```

</CodeBlock>
