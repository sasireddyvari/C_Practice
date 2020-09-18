using System;
namespace sum_of_digits_until_singledigit
{
    public class Program
    {
        public static void Main()
        {
            int a;
            a = int.Parse(Console.ReadLine());
            if (a == 0)
                Console.WriteLine("0");
            Console.WriteLine((a % 9 == 0) ? 9 : (a % 9));
            Console.ReadLine();
        }

    }
}
