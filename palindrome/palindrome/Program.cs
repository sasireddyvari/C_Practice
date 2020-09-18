using System;
namespace palindrome
{
    public class Program
    {
        public static void Main()
        {
            string a;
            a = Console.ReadLine();
            char[] cha = a.ToCharArray();
            Array.Reverse(cha);
            string temp = new string(cha);
            if (temp == a)
                Console.WriteLine("Yes");
            else
                Console.WriteLine("NO");
            Console.ReadLine();
        }
    }
}