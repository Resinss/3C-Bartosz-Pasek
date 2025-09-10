Console.Write("Hello, World! \n");
Console.WriteLine("Hello, World!");

string name = "Jan";
string surname = "Kowalski";
Console.WriteLine("witaj " + name + " " + surname + " " + "tutaj!!!");
Console.WriteLine("Witaj {0} {1} tutaj!!!", name, surname);
Console.WriteLine($"Witaj {name} {surname} tutaj!!!");

Console.WriteLine("Predkość to km\\h");
Console.WriteLine(@"Predkość to km\\h");

int firstNumber = 5;
int secondNumber = firstNumber;
secondNumber++;
Console.WriteLine($"Pierwsza liczba to {firstNumber}");
Console.WriteLine($"Druga liczba to {secondNumber}");

//przekazywane przez zawartość
void Parametrtest_v1(int p)
{
    Console.WriteLine($"Parametr w ParametrTest_v1 {p}");
    p++;
    Console.WriteLine($"Parametr w ParametrTest_v1 {p}");
}

firstNumber = 15;
Console.WriteLine($"firstNumber przed {firstNumber}");
Parametrtest_v1(firstNumber);
Console.WriteLine($"firstNumber po {firstNumber}");
//ParametrTest_v1(99);