#include <iostream>

//Napisz program który pobierze znak od u¿ytkownika  i wyœwietli go.
void task1()
{
	char characterFromUser;
	std::cout << "podaj znak\n";
	std::cin >> characterFromUser;

	std::cout << "poda³eœ zank:" << characterFromUser << "\n";
	if (characterFromUser >= 97 && characterFromUser <= 122)
		std::cout << "jest to ma³a litera alfabetu\n";
	else
		std::cout << "nie jest to ma³a litera alfabetu\m";
				
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task1();

}


/*
TYPY ZANKOWE:
*char - 1 bajt ca³kowitaliczbowa za znakiem <- 128; 127>
* 
*/