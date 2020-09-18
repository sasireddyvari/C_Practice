using System;

public class Program
{
    public static void Main()
    {
        int n1 = 0, n2 = 1, i, number;
        number = int.Parse(Console.ReadLine());
        Console.WriteLine(n1 + " " + n2 + " ");
        for (i = 2; i < number; ++i)
        {
            int n3 = n1 + n2;
            Console.WriteLine(n3 + " ");
            n1 = n2;
            n2 = n3;
        }
    }
}
