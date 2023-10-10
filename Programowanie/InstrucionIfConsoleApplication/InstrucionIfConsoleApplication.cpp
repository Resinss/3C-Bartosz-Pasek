

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



int main()
{
	task1();



}
