#include <iostream>


int main()
{
	std::string text;

	text = "Hello!";
	std::cout<<"Nasz tekst na poczatku: "<< text  <<"\n";
	std::cout << "D³ugoœæ ³añcucha to: " << text.length() << "\n";
	std::cout << "czy zmienna jest pusta " << text.empty() << "\n";	

}
