#include <iostream>


/*
Funkcja:
    - zbiór instrukcji realizuj¹cych zadanie.
    - podprogram
    
Budowa funkcji:
    * nag³owek
    * cia³o funkcji - instrukcje ograniczone nawaisami klamrowymi
Nag³owek:
    typ_zwracanej_danej nazwa_funkcji(parametry)




*/

//napisz program, który wyœwietli na konsoli ,,Hello World!".

void task1()
{
    std::cout << "Hello World!\n";
}

//Napisz funkcje uniwersalna ktora pozwala wyswietlic dowolny tekst
void task2(std::string textParam)
{
    std::cout << textParam << "\n";
}

//Napisz funkcje uniwersalna ktora wyswietli imie oram inforamcje czy ktoœ
//jest pe³notletni czy nie
void task3(std::string name, int age)
{
    if (age >= 18)
        std::cout << name << "jestem po³noletni/pe³noletnia\n";
    else
        std::cout << name << "jestem nie po³noletni/pe³noletnia\n";
}


//Napisz program, który przestestuje zachowanie siê przekazywanych danych przez paraetr
void task4(int number)
{
    std::cout << "zmienna number w funkcji task4 :" << number << "\n";
    number--;
    std::cout << "zmienna number w funkcji task4 :" << number << "\n";
}

//napisz program który wykorzysta przekazywanie parametru pprzez referencje
void task5(int& number)
{
    std::cout << "zmienna number w funkcji task5 :" << number << "\n";
    number--;
    std::cout << "zmienna number w funkcji task5 :" << number << "\n";
}

//Napisz funkcje ktora pobierze od u¿ytkownuika liczbe
void task6_GetNumber(int& number)
{
    std::cout << "podaj liczbe: \n";
    std::cin >> number;
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    /*task1();
    task1();
    */
   
    /*
    task2("witaj swiecie!!");
    task2("ala ma kota");
    std::string text = "uczyæ sie programowania!!";
    task2(text);
    */
    
    /*task3("jan", 35);
    task3("ala", 17);
    */
   
    /*
    int number = 5;
    std::cout << "zmienna number w funkcji main :" << number << "\n";
    task4(number);
    std::cout << "zmienna number w funkcji task4 :" << number << "\n";

    task4(number);
    std::cout << "zmienna number w funkcji main :" << number << "\n";

    task4(9);
    const int NUMBER = 9;
    task4(NUMBER);  
    */

    /*
    int number = 5;
    const int NUMBER = 9;
    std::cout << "zmienna number w funkcji main :" << number << "\n";
    task5(number);
    std::cout << "zmienna number w funkcji task4 :" << number << "\n";

    //task5(9); //BLAD - przez parametr mozna przekazac tylko zmienna
    //task5(NUMBER); //BLAD - przez parametr mozna przeakazac tylko zmienna
    */

    int numberFromUser = 5;
    task6_GetNumber(numberFromUser);
    std::cout << "u¿ytkownik podal liczbe " << numberFromUser << "\n";
}

