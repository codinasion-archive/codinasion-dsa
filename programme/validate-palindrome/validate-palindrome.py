#Write a programme for Validate Palindrom word

def validPalindrome(s):
    lowString= s.lower()
    
    reverse_string =lowString[::-1]
    #check if palindrom word
    print(lowString ==reverse_string)
    return s==reverse_string
 

example1 = "level"  
example2 = "coding" 

validPalindrome(example1) #True
validPalindrome(example2) #False