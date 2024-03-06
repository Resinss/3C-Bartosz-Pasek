#include <iostream>


void task1()
{
	int firstNumber = 40;
	int secondNumber = 697;
	int tab[2] = { 15, 87 };

	std::cout << "Wartoœæ pierwszej zmiennej " << firstNumber << "\n";
	std::cout << "Wartoœæ pierwszej zmiennej " << &firstNumber << "\n";
	std::cout << "Wartoœæ drugiej zmiennej " << secondNumber << "\n";
	std::cout << "Wartoœæ drugiej zmiennej " << &secondNumber << "\n";
	*(&secondNumber) = 741;
	std::cout << "Wartoœæ drugiej zmiennej " << secondNumber << "\n";

	std::cout << "zawartoœæ zerowej komórki " << tab[0] << "\n";
	std::cout << "zawartoœæ zawartoœæ pierwszej komórki " << tab[1] << "\n";
	std::cout << "adres zerowej komórki " << &tab[0] << "\n";
	std::cout << "adres pierwszej komórki " << &tab[1] << "\n";
	std::cout << "adres  tablicy " << tab << "\n";
	std::cout << "zawartoœæ zerowej komórki " << (tab + 0) << "\n";
	std::cout << "zawartoœæ pierwszej komórki " << (tab + 1) << "\n";
}



int main()
{
	setlocale(LC_CTYPE, "polish");
	task1();
}

