#include <iostream>


int main()
{
	setlocale(LC_CTYPE, "polish");
	std::string text;

	text = "Hello!";
	std::cout<<"Nasz tekst na poczatku: "<< text  <<"\n";
	std::cout << "D³ugoœæ ³añcucha to: " << text.length() << "\n";
	std::cout << "czy zmienna jest pusta " << text.empty() << "\n";	
	text.append(", World");
	//text = text + ", World!";
	//text  +=",World!";
	std::cout << "Nasz tekst na: " << text << "\n";
	//"Hello, World!"
	std::string subText = text.substr(7, 5);
	std::cout << "Skopiowany podtekst: " << subText << "\n";


	text = "Ala ma kota";
	text.replace(0, 3, "Ola");
	std::cout << "Nasz tekt na: " << text << "\n";

	//text = text.substr(0, 3) + "nie" + text.substr(3, text.length() - 3);
	std::cout << "Nasz tekst na: " << text << "\n";

}
