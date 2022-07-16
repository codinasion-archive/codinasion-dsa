// Write a programme for binary search
using System;

public class Program
{
    public static void Main(string[] args)
    {
        int[] example = new int[] { 10, 20, 30, 50, 60, 80 };
        int target = 30;

        string stringExample = printArray(example);
        Console.WriteLine($"Input  : {stringExample}");
        Console.WriteLine($"Target : {target}");
        Console.WriteLine($"\nOutput : {BinarySearch(example, target)}");
    }

    public static string printArray(int[] array)
    {
        string stringExample = "";
        for (int i = 0; i < array.Length; i++)
        {
            stringExample += $"{array[i]} ";
        }
        return stringExample;
    }

    public static object BinarySearch(int[] inputArray, int key)
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
