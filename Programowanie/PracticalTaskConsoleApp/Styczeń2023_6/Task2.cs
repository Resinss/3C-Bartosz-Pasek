using System;

namespace PracticalTaskConsoleApp.czerwiec2023_6
{
    internal class Movie
    {
        private string name;
        private int number;

        public Movie(string name, int initialNumber)
        {
            this.name = name;
            this.number = initialNumber;
        }

        public void ShowInfo()
        {
            Console.WriteLine($"Tytuł: {name}");
            Console.WriteLine($"Liczba wypożyczeń: {number}");
        }

        public void SetNumber(int newNumber)
        {
            number = newNumber;
        }

        public void Add(int amount)
        {
            number += amount;
            Console.WriteLine($"Liczba wypożyczeń teraz: {number}");
        }
    }

    internal class MovieApp
    {
        public void Run()
        {
            Movie movie1 = new Movie("Szybcy i wściekli", 2);
            movie1.ShowInfo();
            movie1.Add(6);
            Console.WriteLine();

            Movie movie2 = new Movie("Świat", 3);
            movie2.ShowInfo();
            movie2.Add(3);
        }
    }
}