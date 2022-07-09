// Write a programme for linear search
using System;

public class Program
{
    public static void Main()
    {
        int[] input = { 10, 20, 80, 30, 60, 50 };
        int target = 30;
        int result = LinearSearch(input, target);
        if (result == -1)
            Console.WriteLine("Target Not Found");
        else
            Console.WriteLine("Target Found at Index : " + result);
    }

    public static int LinearSearch(int[] array, int target)
    {
        int n = array.Length - 1;
        for (int i = 0; i <= n; i++)
        {
            if (array[i] == target)
            {
                return i;
            }
        }

        return -1;
    }
}
