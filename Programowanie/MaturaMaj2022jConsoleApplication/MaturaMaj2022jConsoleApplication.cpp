#include <iostream>
#include <fstream>
#include <vector>
#include <set>

int main()
{
	std::ifstream file("przyklad.txt");
	/*
	int numbers[200];

	for (int i = 0; i < 200; i++)
	{
		file >> numbers[i];
	}

	std::cout << "Odczytanie liczby: \n";
	for (int i = 0; i <	200; i++)
	{
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
	*/

	std::vector<int> numbers;

	int num;
	while (file >> num)
		numbers.push_back(num);
	/*
	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << ", ";
	}
	*/

	std::cout << "Wyswietlone liczby: \n";
	for (int num : numbers)
	{
		std::cout << num << ", ";
	}
	std::cout << "\n";

	std::cout << "Zadanie 4.1 \n";
	int count = 0;
	for (int num : numbers)
	{
		int firstDigit;
		int lastDigit = num % 10;

		int tmpNum = num;
		do 
		{
			firstDigit = tmpNum % 10;
			tmpNum = tmpNum / 10;
		} while (tmpNum == lastDigit);

			if(firstDigit == lastDigit)
			{
				count++;
			}
	}

}

using namespace std;
vector<int> primeFactors(int n) {
	vector<int> factors;
	for (int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			factors.push_back(i);
			n /= i;
		}
	}
	if (n > 1) {
		factors.push_back(n);
	}
	return factors;
}
int main() {
	ifstream file("liczby.txt");
	if (!file) {
		cerr << "Nie mo¿na otworzyc pliku liczby.txt" << endl;
		return 1;
	}

	int number;
	int maxTotalFactors = 0, maxDistinctFactors(number);
	int numberWithMaxFactors = 0, numberWithMaxDistinct = 0;

	while (file >> number) {

	}
}