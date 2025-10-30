using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTaskConsoleApp.czerwiec_2022
{
    public class Person
    {
        private static int _count = 0;
        private int id;
        private string firstName;
        public int number_of_instance;

        public Person()
        {
            id = 0;
            firstName = string.Empty;
            _count++;
            number_of_instance = _count;
        }

        public Person(int id, string firstName)
        {
            this.id = id;
            this.firstName = firstName;
            _count++;
            number_of_instance = _count;
        }

        public Person(Person other)
        {
            id = other.id;
            firstName = other.firstName;
            _count++;
            number_of_instance = _count;
        }

        public void WriteName(string who)
        {
            string displayName = string.IsNullOrWhiteSpace(firstName) ? "Brak danych" : firstName;
            Console.WriteLine($"Cześć {who}, mam na imię {displayName}");
        }
    }
}
