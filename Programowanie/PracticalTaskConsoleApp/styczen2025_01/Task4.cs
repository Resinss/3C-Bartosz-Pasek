using System;

namespace PracticalTaskConsoleApp.styczen2025_01
{
    class Pralka
    {
        private int numerProgramu = 0;

        public int UstawProgram(int numer)
        {
            if (numer >= 1 && numer <= 12)
            {
                numerProgramu = numer;
                Console.WriteLine("Ustawiono program prania nr " + numerProgramu);
            }
            else
            {
                numerProgramu = 0;
                Console.WriteLine("Błędny numer programu!");
            }
            return numerProgramu;
        }
    }

    class Odkurzacz
    {
        private bool stan = false;

        public void On()
        {
            if (!stan)
            {
                stan = true;
                Console.WriteLine("Odkurzacz włączono");
            }
        }

        public void Off()
        {
            if (stan)
            {
                stan = false;
                Console.WriteLine("Odkurzacz wyłączono");
            }
        }

        public void RozladowalSie()
        {
            Console.WriteLine("Odkurzacz wyładował się");
        }
    }

    class Task4
    {
        public void Uruchom()
        {
            Pralka pralka = new Pralka();
            Odkurzacz odkurzacz = new Odkurzacz();

            Console.Write("Podaj numer programu prania (1-12): ");
            int numer;
            if (int.TryParse(Console.ReadLine(), out numer))
            {
                pralka.UstawProgram(numer);
            }

            odkurzacz.On();
            odkurzacz.On();
            odkurzacz.On();

            odkurzacz.RozladowalSie();

            odkurzacz.Off();

        }
    }
}