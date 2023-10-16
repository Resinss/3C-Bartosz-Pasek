

#include <iostream>

//Napisz program, który wyświetli informacje czy liczba jest dodatnia czy nie.
void task1()
{
	int number;
	std::cout << "Podaj liczbe:\n";
	std::cin >> number;

	if (number > 0)
		std::cout << "Liczba jest dodatnia\n";
	
	if (number < 0)
		std::cout << "Liczba jest ujemna\n";

	if (number == 0)
		std::cout << "Liczba jest rowna zero\n";
	
	std::cout << "Koloejna instrukcja\n";
}

//NAPISZ PROGRAM, KTÓRY WYŚWIETLI INFORMACJE CZY LICZBA JEST PARZYSTA CZY NIEPARZYSTA.
void task2() 
{
	int number;
	std::cout << "Podaj liczbe:\n";
	std::cin >> number;

	int rest = number % 2;  

	if (rest == 0)
		std::cout << "Liczba jest parzysta\n";

	if (rest != 0) // rest ==1
		std::cout << "Liczba jest nieparzysta\n";

	if (rest == 0)
		std::cout << "Liczba jest parzysta\n";
	else
		std::cout << "Liczba jest nieparzysta\n";
}


int main()
{
	//task1();
	task2();


}
