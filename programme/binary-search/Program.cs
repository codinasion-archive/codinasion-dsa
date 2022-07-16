//Binary Search

using System;

namespace BinarySearch
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] example = new int[] { 10, 20, 30, 50, 60, 80 };
            int target = 30;

            //Funciton for outputting our array into text
            string stringExample = "";
            void printArray(int[] array)
            {
                for (int i = 0; i < array.Length; i++)
                {
                    stringExample += $"{array[i]} ";
                }
            }

            printArray(example);
            Console.WriteLine($"Input : {stringExample}");
            Console.WriteLine($"Target : {target}");

            Console.WriteLine($"Output: {BinarySearch(example, target)}");



            static object BinarySearch(int[] inputArray, int key)
            {
                int min = 0;
                int max = inputArray.Length - 1;
                while (min <= max)
                {
                    int mid = (min + max) / 2;
                    if (key == inputArray[mid])
                    {
                        return mid++;
                    }
                    else if (key < inputArray[mid])
                    {
                        max = mid - 1;
                    }
                    else
                    {
                        min = mid + 1;
                    }
                }
                return "Nil";
            }

            
        }
    }
}