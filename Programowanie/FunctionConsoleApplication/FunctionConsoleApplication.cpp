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

int main()
{
    task1();
    task1();
    task2("witaj swiecie!!");
    task2("ala ma kota");
    std::string text = "uczyæ sie programowania!!";
    task2(text);

    task3("jan", 35);
    task3("ala", 17);
}

