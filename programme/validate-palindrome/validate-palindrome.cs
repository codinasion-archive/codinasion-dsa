// Write a programme to validate palindrome
using System;

namespace validPalindrome
{
    internal class Program
    {
        static bool validPalindrome(string s)
        {
            string lowString = s.ToLower();

            string reverseString = string.Empty;
            for (int i = lowString.Length - 1; i >= 0; i--)
            {
                reverseString += lowString[i];
            }
            return s == reverseString;
        }

        static void Main(string[] args)
        {
            string example1 = "level";
            Console.WriteLine($"Input  : {example1}");
            Console.WriteLine($"Output : {validPalindrome(example1)}");
        }
    }
}
