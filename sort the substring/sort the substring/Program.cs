using System;

namespace sort_the_substring
    {
        class Program
        {
            static void Main(string[] args)
            {
                long t = Convert.ToInt64(Console.ReadLine());
                while (t-- > 0)
                {
                    string str = Console.ReadLine();// the input is given as such that string is followed by a starting and ending index seperated by Null character 

                    var str1 = str.Split()[0];// to store the given string by splitting the given input 
                    var str2 = str.Split()[1];// to store starting index 
                    var str3 = str.Split()[2];//to store ending index 

                    int StartingIndex = int.Parse(str2);
                    int EndingIndex = int.Parse(str3);
                    string l1 = str1.Substring(0, StartingIndex);// l1 with length of starting index
                    int length = EndingIndex + 1 - StartingIndex;
                    string l2 = str1.Substring(StartingIndex, length);//l2 with the calculated length
                    char[] cha = l2.ToCharArray();
                    Array.Sort(cha);
                    Array.Reverse(cha);
                    string l3 = str1.Substring(EndingIndex + 1);
                    Console.WriteLine(l1 + new string(cha) + l3);
                }
                Console.ReadLine();
            }
        }
   }
