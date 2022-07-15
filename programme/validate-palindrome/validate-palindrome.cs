namespace validPalindrome
{
    internal class Program
    {
        static void Main(string[] args)
        {
            bool validPalindrome(string s)
            {
                string lowString = s.ToLower();

                string reverseString = string.Empty;
                for (int i = lowString.Length - 1; i >= 0; i--)
                {
                    reverseString += lowString[i];
                }
                return s == reverseString;
            }
            string example1 = "level";
            Console.WriteLine($"Input  : {example1}");
            Console.WriteLine($"Output : {validPalindrome(example1)}");

            string example2 = "coding";
            Console.WriteLine($"\nInput  : {example2}");
            Console.WriteLine($"Output : {validPalindrome(example2)}");
        }
    }
}