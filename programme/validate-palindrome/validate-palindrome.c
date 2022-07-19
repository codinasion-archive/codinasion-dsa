// Write a programme to validate palindrome
// We assume that given input string is all lowered letters and also that the string has no spaces
// Because it is a char to char comparison it also works if we give a number as string input

#include <stdio.h>
#include <string.h>

// A function to check if a given string is palindrome
void isPalindrome(char input[])
{
  // 2 variables, in order to access first and last chars of input array
  int firstCharOfArray = 0;
  int lastCharOfArray = strlen(input) - 1;

  // Keep comparing characters while there are characters
  while (lastCharOfArray > firstCharOfArray)
  {
    if (input[firstCharOfArray++] != input[lastCharOfArray--])
    {
      printf("%s is not a palindrome\n\n", input);
      return;
    }
  }
  printf("%s is a palindrome\n\n", input);
}

// Script to check above code
int main()
{
  // Words Tests
  isPalindrome("coding");
  isPalindrome("level");
  isPalindrome("example");

  // Number Tests
  isPalindrome("121");
  isPalindrome("2022");

  // Mixed Tests
  isPalindrome("a1b2c2b1a");
  isPalindrome("123ab321");
}
