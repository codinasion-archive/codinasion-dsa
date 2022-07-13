# Write a programme to Validate Palindrom string

def validPalindrome(s):
    lowString = s.lower()

    reverse_string = lowString[::-1]

    return s == reverse_string


example1 = "level"
print("Input  :", example1)
print("Output :", validPalindrome(example1))

example2 = "coding"
print("\nInput  :", example2)
print("Output :", validPalindrome(example2))
