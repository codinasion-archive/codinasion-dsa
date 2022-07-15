---
title: Validate Palindrome String
description: In Palindrome algorithm, we simply reverse the the input String. If the two strig are equals then return True, otherwise, the algorithm returns False.
image: validate-palindrome.png
contributors:
  - PaoloFer
  - nohno2
---

## Palindrome

A string is said to be palindrome if the reverse of the string is the same as string. For example, “level” is a palindrome, but “coding” is not a palindrome.

```txt
Input  : 1) "level"   2) "coding"   3) "121"  

Output : 1)   True    2)   False    3)  True

```

Steps :-

```txt
Input_string:   1) "level"  2) "coding"   3)  "121"

Reverse string: 1) "level"  2) "gnidoc"   3)  "121"

1)  Input string is euqals to Reverse string    --> True

2)  Input string is different to Reverse string --> False

3)  Input string is equals to Reverse string    --> True
```

```txt
Time Complexity : O(n)
```

```txt
Space Complexity : O(1)
```

---
