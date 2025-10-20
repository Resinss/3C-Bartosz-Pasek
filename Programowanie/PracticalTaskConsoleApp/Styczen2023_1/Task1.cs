namespace PractitalTasks.Styczeń_2023_1;

internal class Task1
{

    static void NWD(int a, int b)
    {
        while (a != b)
        {
            if (a > b)
            {
                a -= b;
            }
            else
                b -= a;
        }
        Console.WriteLine("NWD = " + a);
    }

    static void Task()
    {
        Console.WriteLine("Podaj pierwszą liczbe");
        int a = int.Parse(Console.ReadLine());
        if (a < 0)
            a = a * (-1);
        Console.WriteLine("Podaj drugą liczbe");
        int b = int.Parse(Console.ReadLine());
        if (b < 0)
            b = b * (-1);
        NWD(a, b);
    }
}

     