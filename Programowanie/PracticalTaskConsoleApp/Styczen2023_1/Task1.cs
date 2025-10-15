using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTaskConsoleApp.Styczen2023_1
{
    internal class Task1
    {
        public void Task()
        {
            while (true)
            {
                Console.WriteLine("Użytkowniku podaj liczbę");
                int a = int.Parse(Console.ReadLine());

                Console.WriteLine("Podaj drugą liczbe");
                int b = int.Parse(Console.ReadLine());

                while (b != 0) ;
                {
                    int temp = b;
                    b = a % b;
                    a = temp;
                }

            }
        }
    }
}
