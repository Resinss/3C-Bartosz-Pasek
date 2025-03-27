#include <iostream>
#include <fstream>
#include<limits>

int main() {
	std::ifstream file("liczby.txt");
	if (!file) {
		std::cerr << "Nie mozna otworzyc pliku.\n";
		return 1;
	}
	
}

